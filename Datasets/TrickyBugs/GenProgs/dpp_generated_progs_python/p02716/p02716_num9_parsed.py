# Approach:
1. We need to choose exactly floor(N/2) elements from the given sequence such that no two adjacent elements are chosen.
2. To maximize the sum, we can follow a greedy approach.
3. We can start by choosing the first element and then skip the next element.
4. We can iterate through the remaining elements and choose elements at an even index starting from the second index.
5. We will keep track of the sum of the chosen elements and return it as the answer.

# Steps:
1. Read the value of N from input.
2. Read the sequence A from input and split it into a list of integers.
3. Initialize the sum of chosen elements as 0.
4. Iterate from index 0 to N-1 with a step size of 2:
    a. Add A[i] to the sum of chosen elements.
5. Print the sum of chosen elements as the output.