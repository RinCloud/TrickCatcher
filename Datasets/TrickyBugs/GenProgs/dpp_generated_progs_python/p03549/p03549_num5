import math

N, M = map(int, input().split())

# Calculate the execution time for each case
execution_time = 1900 * M + 100 * (N - M)

# Calculate the expected value
expected_value = execution_time * (2**M) + (execution_time + 100) * (2**(N-M) - (2**M))

print(int(expected_value))