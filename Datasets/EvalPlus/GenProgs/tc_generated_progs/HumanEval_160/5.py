def do_algebra(operator, operand):
    """
    Given two lists operator, and operand. The first list has basic algebra operations, and 
    the second list is a list of integers. Use the two given lists to build the algebraic 
    expression and return the evaluation of this expression.
    The basic algebra operations:
    Addition ( + ) 
    Subtraction ( - ) 
    Multiplication ( * ) 
    Floor division ( // ) 
    Exponentiation ( ** ) 
    Example:
    operator['+', '*', '-']
    array = [2, 3, 4, 5]
    result = 2 + 3 * 4 - 5
    => result = 9
    Note:
        The length of operator list is equal to the length of operand list minus one.
        Operand is a list of non-negative integers.
        Operator list has at least one operator, and operand list has at least two operands.
    """
    l_operand = len(operand)
    l_operator = len(operator)
    s = ''
    for i in range(l_operator):
        if i == 0:
            s += str(operand[0]) + operator[i]
        else:
            s += str(operand[i]) + operator[i]
    return eval(s)