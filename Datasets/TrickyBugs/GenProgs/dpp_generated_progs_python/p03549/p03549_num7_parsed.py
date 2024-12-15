import math

N, M = map(int, input().split())

# Calculate the probability of failing to solve a case in one submission
failure_probability = (1 / 2) ** M

# Calculate the expected time for one submission to fail
failure_time = 1900 * M

# Calculate the expected time for one submission to succeed
success_time = 100 * (N - M)

# Calculate the expected total execution time
expected_time = (failure_time + success_time) / (1 - failure_probability)

print(math.floor(expected_time))