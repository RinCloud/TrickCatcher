# Plan
To check if a good string exists, we can use a stack and iterate through the permutation P. For each element P_i, if S_i is 0, we push P_i to stack X, otherwise, we push P_i to stack Y. At the end, we compare the sizes of X and Y. If they are the same, a good string exists.

To find the lexicographically smallest good string, we can sort the permutation P in ascending order. Then, we iterate through the sorted permutation P and check if S_i should be a 0 or 1 based on the position of P_i in the sorted permutation. We maintain two counters `countX` and `countY` to keep track of the number of elements pushed to X and Y. If `countX` is equal to `countY`, we set S_i as 0, otherwise we set S_i as 1.

Let's implement this.