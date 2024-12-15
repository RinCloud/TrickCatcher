# Solution Approach
To solve this problem, we need to find the number of possible values of the sum of the chosen numbers modulo (10^9+7). 

Since we have N+1 integers: 10^{100}, 10^{100}+1, ..., 10^{100}+N, we can see that the possible values of the sum will range from the sum of the minimum K numbers (10^{100} + 10^{100}+1 + ... + 10^{100}+K-1), to the sum of the maximum K numbers (10^{100}+N + 10^{100}+N-1 + ... + 10^{100}+N-K+1).

Based on this observation, we can create a mathematical formula for the number of possible values of the sum:

Number of possible values of the sum = (10^{100}+N - 10^{100}+K+1 + 1) % (10^9+7)

# Plan
1. Read the input values for N and K.
2. Calculate the number of possible values of the sum using the formula ((10^{100}+N - 10^{100}+K+1 + 1) % (10^9+7)).
3. Print the result.