import math

def expected_execution_time(N, M):
    # Calculate expected time for solving M cases with 1/2 probability
    m_time = 1900 * M

    # Calculate expected time for solving (N - M) cases without fail
    nm_time = 100 * (N - M)

    # Calculate total expected time
    total_time = m_time + nm_time

    return total_time


# Read input
N, M = map(int, input().split())

# Calculate expected execution time
X = expected_execution_time(N, M)

# Print the result
print(X)