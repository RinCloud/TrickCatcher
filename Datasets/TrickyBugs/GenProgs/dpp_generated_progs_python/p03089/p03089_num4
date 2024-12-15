# Approach
We need to perform N operations on an empty sequence a to obtain a given sequence b. Since we can only insert j at position j in a for the i-th operation, it means that in the final sequence, the count of j should be equal to j.

We can iterate over the elements of b and perform the following checks:
- If b[i] is greater than i+1, which means there are more occurrences of j in b than the i-th operation can insert, then it is not possible to obtain b after N operations. We print -1 and exit.
- If b[i] is less than i+1, which means there are fewer occurrences of j in b than the i-th operation can insert, then we need to find the position of one of the remaining j's and insert it at position i+1. We print i+1 and remove the inserted j from the remaining positions.
- If b[i] is equal to i+1, which means the count of j in b matches the count of j that can be inserted by the i-th operation, then we simply print i+1.

# Plan
1. Read the input value of N.
2. Read the input sequence b.
3. Initialize a list, operations, to store the operations performed.
4. Initialize a list, remaining, to store the positions where j can be inserted.
5. Iterate over the elements of b:
   a. If b[i] is greater than i+1, print -1 and exit.
   b. If b[i] is less than i+1, print i+1, remove b[i] from remaining, and continue to the next iteration.
   c. If b[i] is equal to i+1, print i+1 and continue to the next iteration.
6. If all iterations are completed, print the values in remaining.

# Dry Run
## Input
    N = 3
    b = [1, 2, 1]
## Output
    1
    1
    2
## Execution
    N = 3
    b = [1, 2, 1]
    operations = []
    remaining = [1, 2, 3]
    i = 0, b[i] = 1, b[i] == i+1, print 1, operations = [1], remaining = [2, 3]
    i = 1, b[i] = 2, b[i] < i+1, print 2, operations = [1, 2], remaining = [3]
    i = 2, b[i] = 1, b[i] == i+1, print 3, operations = [1, 2, 3], remaining = []
    remaining is empty, done