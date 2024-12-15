import math

N, K, P = map(int, input().split())

# Calculate the factorial of N
fact_N = math.factorial(N)

# Calculate the factorial of K
fact_K = math.factorial(K)

# Calculate the number of valid graphs
result = (fact_N // (fact_N - K)) % P

print(result)