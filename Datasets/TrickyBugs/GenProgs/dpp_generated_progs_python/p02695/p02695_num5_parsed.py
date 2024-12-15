# Plan
1. Read the values of N, M, and Q from input.
2. Initialize an empty list A to store the sequence.
3. Initialize a variable max_score to store the maximum possible score of A.
4. Read the quadruples (a_i, b_i, c_i, d_i) from input and iterate over each of them.
5. For each quadruple, generate all possible sequences A that satisfy the given conditions:
   - Generate all possible values for A_1, A_2, ..., A_N using nested loops.
   - Check if the score of the current sequence A is greater than max_score, update max_score if necessary.
6. Print the value of max_score as the maximum possible score of A.