from math import factorial

def expected_execution_time(N, M):
    total_time = 0
    
    # calculate the expected time to solve each individual case
    expected_time_individual = 1900 * 2**M + 100 * (N - M)
    
    # calculate the number of ways to select M cases out of N
    combinations = factorial(N) // (factorial(M) * factorial(N - M))
    
    # calculate the sum of expected time for each combination
    expected_time_total = expected_time_individual * combinations
    
    # Print the total expected execution time
    print(expected_time_total)

# Read input values
N, M = map(int, input().split())

# Call the function
expected_execution_time(N, M)