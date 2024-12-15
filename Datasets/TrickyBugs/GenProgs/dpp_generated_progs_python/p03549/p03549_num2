import math

def calculate_expected_execution_time(N, M):
    # Calculate the time taken to solve M cases correctly
    time_correct = 1 / 2 * 1900 * M

    # Calculate the time taken to solve (N - M) cases correctly
    time_incorrect = 100 * (N - M)

    # Calculate the total expected execution time
    expected_time = time_correct + time_incorrect

    # Convert the expected time to milliseconds and round it to the nearest integer
    expected_time = math.ceil(expected_time)

    # Print the expected execution time
    print(expected_time)

# Read the input values
N, M = map(int, input().split())

# Calculate and print the expected execution time
calculate_expected_execution_time(N, M)