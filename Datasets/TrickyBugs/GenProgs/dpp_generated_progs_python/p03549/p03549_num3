from math import ceil

N, M = map(int, input().split())

# Time taken to correctly solve each of the M cases
time_M = 1900 * M

# Time taken to correctly solve each of the other N-M cases
time_NM = 100 * (N - M)

# Total time taken for first submission
total_time = time_M + time_NM

# Expected value of total execution time
expected_time = total_time * pow(2, M)

print(int(expected_time))