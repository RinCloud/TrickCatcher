# Here in this problem we need to find the sum of scores over all possible permutations.
# Let's break down the problem.
# To paint all the squares black, we need to operate all the machines at least once.
# So the minimum score for any permutation would be N-1.
# Now let's see what score each machine contributes when it is operated.
# For the machine at position i, it paints squares i and i+1 black.
# So, if we operate machine at position i before squares i and i+1 are painted black, then it contributes a score of (N-i), because there are (N-i) machines left to be operated after it.
# So the total score contributed by machine at position i would be (N-i)*(N-i) = (N-i)^2.

# Now let's calculate the sum of scores over all possible permutations.
# For a permutation, P, the score contributed by machine at position i would be (N-i)^2.
# Since there are (N-1) machines, the score contributed by permutation P would be (N-1)^2 + (N-2)^2 + ... + 1^2.
# We can simplify the sum of squares of natural numbers formula, i.e., 1^2 + 2^2 + ... + n^2 = (n*(n+1)*(2n+1))/6.
# Using this formula, the score contributed by permutation P would be ((N-1)*N*(2*N-1))/6.

# Now let's calculate the sum of scores over all possible permutations.
# Since there are (N-1)! permutations possible, the sum of scores over all possible permutations would be ((N-1)*N*(2*N-1))/6 * (N-1)!.
# We can simplify this further to ((N-1)*(N-1)!) * (N*N-1).

# To find the sum of scores over all possible permutations modulo (10^9+7), we take modulo at each step of the calculation.

# Let's write the code to solve the problem:

N = int(input())

# Calculate the factorial N-1!
factorial = 1
for i in range(2, N):
    factorial = (factorial * i) % (10**9 + 7)

# Calculate the sum of scores over all possible permutations modulo (10^9+7)
result = (((N-1) * factorial) % (10**9 + 7)) * ((N * N - 1) % (10**9 + 7))
result %= (10**9 + 7)

print(result)