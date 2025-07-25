

# Introduction
This is the replication package of the paper *LLM-Powered Test Case Generation for Detecting Bugs in Plausible Programs*. This work has been published in the Proceedings of the 63rd Annual Meeting of the Association for Computational Linguistics (ACL2025).

Here we introduce the file structure of this repo:
- **/Datasets/**: Basic data of the two dataset TrickyBugs and EvalPlus.
  - **/TrickyBugs/**: Data of TrickyBugs.
    - **/PUTs/**: The PUTs of TrickyBugs.
    - **/GenInputs/**: Inputs, generators and testcases generated by the LLM. Inputs generated by generators are too large (18GiB) so we only keep the bug-triggering inputs.
    - **/GenProgs/**: Program variants generated by the LLM.
    - **/PromptTemplates/**: Prompts used to generate test inputs, generators, test cases and program variants.
  - **/EvalPLus/**: Data of EvalPlus.
    - **/PUTs/**: The PUTs of EvalPlus.
    - **/GenInputs/**: Inputs, generators and testcases generated by the LLM. Folders ends with `_response` are LLM's original response. JSON files are extracted inputs and ouputs.
      - **/check_inputs_validity/**: The source code of checking the validity of generated inputs using EvalPlus's contracts and getting test oracle using EvalPlus's canonical solutions.
    - **/GenProgs/**: Program variants generated by the LLM.
    - **/PromptTemplates/**: Prompts used to generate test inputs, generators, test cases and program variants.
- **/Analysis/**: 
  - **utils.py**: Tool functions for the experiments.
  - **RQ1&RQ5.ipynb**: Jupyter notebook used to reproduce the results of RQ1&RQ5.
  - **RQ2.ipynb**: Jupyter notebook used to reproduce the results of RQ2.
  - **RQ3.ipynb**: Jupyter notebook used to reproduce the results of RQ3.
  - **RQ4.ipynb**: Jupyter notebook used to reproduce the results of RQ4.
- **/Data/**: The middle data of the experiments. Details of the data are described in the replication jupyter notebooks.

# Getting Started

We recommend use conda environment to run this replication package.

1.Creat a conda env with python=3.10 and activate it.

```bash
conda create -n env_TC python=3.10
conda activate env_TC
```

2.Install the dependecies.

```bash
cd TrickCatcher
pip install -r requirements
```

3.Open the `Analysis` directory.
```bash
cd TrickCatcher/Analysis
jupyter notebook
```
The Jupyter Notebook shuld open in the browser. 

4.Select and open the following files, and reproduce experimental results according to the steps and tips provided within the files.
- `RQ1&RQ5.ipynb`: Reproduce the results of RQ1 and RQ5. Please first read this notebook before you use other notebooks.
- `RQ2.ipynb`: Reproduce the results of RQ2.
- `RQ3.ipynb`: Reproduce the results of RQ3.
- `RQ4.ipynb`: Reproduce the results of RQ4.

# Data Source

The datsets `TrickyBugs` and `EvalPlus` used in the experiments are both open source datasets.

For more details about  `TrickyBugs`, please refer to the link below:
- [TrickyBugs Github](https://github.com/RinCloud/TrickyBugs/)

For more details about  `EvalPlus`, please refer to the link below:
- [EvalPlus Github](https://github.com/evalplus/evalplus/tree/master)

# Citation

You can use the following bib for citing this work:

```
@inproceedings{liu2025trickCatcher,
    title = "LLM-Powered Test Case Generation for Detecting Bugs in Plausible Programs",
    author = "Liu, Kaibo  and
      Chen, Zhenpeng  and
      Liu, Yiyang  and
      Zhang, M. Jie  and
      Harman, Mark  and
      Han, Yudong  and
      Ma, Yun  and
      Dong, Yihong  and
      Li, Ge  and
      Huang, Gang",
    booktitle = "Proceedings of the 63rd Annual Meeting of the Association for Computational Linguistics (Volume 1: Long Papers)",  
    year = "2025",
    publisher = "Association for Computational Linguistics"
}
```

