import json
from typing import Any, Dict, List, Optional, Tuple, Union
from warnings import warn
import hashlib

from evalplus.gen.util import trusted_exec

from evalplus.eval.utils import time_limit

# 1st item: the status
# 2nd item (optional): the detailed pass/fail boolean for each input
Result = Tuple[str, List[bool]]

def read_custom_input_file(input_file: str):
    try:
        with open(input_file, "r") as f:
            return json.load(f)
    except Exception as e:
        print(f"Failed to read input file: {e}")
        return None

def alternate_plus_input(problems: dict, new_input: dict):
    for problem in new_input:
        problems[problem]['plus_input'] = new_input[problem]
    return problems

def add_to_plus_input(problems: dict, new_input: dict):
    for problem in new_input:
        problems[problem]['plus_input'] += new_input[problem]
    return problems

def get_custom_hashcode(input_file: str):
    try:
        with open(input_file, "rb") as f:
            content = f.read()
            return f"custom_{hashlib.md5(content).hexdigest()}"
    except Exception as e:
        print(f"Failed to read input file: {e}")
        return None

'''
example:
new_input = { 'HumanEval/1': [[1, 1, 2], [1, 4, 5]] }
means 2 test cases for problem 'HumanEval/1': [1, 1, 2] and [1, 4, 5]
'''

def exec_skip_invalid(code, inputs, entry_point, input_valid):
    exec_globals = {}
    exec(code, exec_globals)
    fn = exec_globals[entry_point]

    ret = []

    for i in range(len(inputs)):
        inp = inputs[i]
        if not input_valid[i]:
            ret.append(None)
            continue
        ret.append(fn(*inp))

    return ret
    
def get_outputs(problems, all_inputs, input_valid):
    outputs = {}
    for task_id, inputs in all_inputs.items():
        if task_id not in problems:
            outputs[task_id] = None
            continue
        problem = problems[task_id]
        print(f"getoutput {task_id}")
        output = exec_skip_invalid(
            problem["prompt"] + problem["canonical_solution"],
            inputs,
            problem["entry_point"],
            input_valid[task_id],
        )
        outputs[task_id] = output
    return outputs

def trusted_check_exec_(code, inputs, entry_point):
    """Check trusted_exec success."""
    try:
        with time_limit(seconds=10.0 * len(inputs)):
            trusted_exec(code, inputs, entry_point)
    except Exception:
        return False
    return True

def verify_input(contract, inp, entry_point):
    exec_globals = {}
    exec(contract, exec_globals)
    fn = exec_globals[entry_point]
    try:
        with time_limit(seconds=1.0):
            fn(*inp)
    except Exception as e:
        return False, repr(e)
    return True, None

def verify_inputs(problems, all_inputs):
    input_valid = {}
    input_valid["error_msg"] = {}
    for task_id, inputs in all_inputs.items():

        print(f"verify {task_id}")
        if task_id not in problems:
            continue
        problem = problems[task_id]
        c_code = problem["prompt"] + problem["contract"] + problem["canonical_solution"]
        input_valid[task_id] = []
        input_valid["error_msg"][task_id] = []
        for inp in inputs:
            r, error_msg = verify_input(c_code, inp, problem["entry_point"])
            input_valid[task_id].append(r)
            input_valid["error_msg"][task_id].append(error_msg)
    return input_valid

def get_result(problems, all_inputs):
    input_valid = verify_inputs(problems, all_inputs)
    outputs = get_outputs(problems, all_inputs, input_valid)
    result = {}
    for task_id in all_inputs:
        if task_id not in problems:
            result[task_id] = None
            continue
        # problem = problems[task_id]
        result[task_id] = list(zip(input_valid[task_id], outputs[task_id], input_valid["error_msg"][task_id]))
    return result
