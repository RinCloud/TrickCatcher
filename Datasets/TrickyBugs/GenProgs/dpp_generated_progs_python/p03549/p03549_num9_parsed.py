from itertools import combinations

def calculate_expected_time(N, M):
    total_cases = 2 ** N
    total_fail_cases = 0
    case_time = 0

    # Calculate the total number of cases where the code fails
    for i in range(M):
        total_fail_cases += len(list(combinations(range(N), i)))

    # Calculate the time for cases where the code fails
    case_time += total_fail_cases * 1900

    # Calculate the time for cases where the code doesn't fail
    case_time += (total_cases - total_fail_cases) * 100

    return case_time

# Read input from standard input
N, M = map(int, input().split())

# Calculate and print the expected time
expected_time = calculate_expected_time(N, M)
print(expected_time)