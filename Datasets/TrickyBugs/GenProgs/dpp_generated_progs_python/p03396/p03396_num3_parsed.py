# Implementation of the solution

def min_shopping_time(N, L, shopping_centres, shopping_times):
    # Find the total time required to reach all the shopping centres and return home
    total_time = 2 * L + sum(shopping_times)

    min_time = float('inf')
    curr_time = 0
    for i in range(N):
        remaining_shopping_time = sum(shopping_times[i:])

        # Calculate the time required to reach the current shopping centre and return home
        shopping_time = shopping_times[i] + (2 * shopping_centres[i])
        time = total_time - remaining_shopping_time + shopping_time

        # Update the minimum time if necessary
        min_time = min(min_time, time)

    return min_time


# Read the input
N, L = map(int, input().split())
shopping_centres = list(map(int, input().split()))
shopping_times = list(map(int, input().split()))

# Calculate the minimum shopping time
min_time = min_shopping_time(N, L, shopping_centres, shopping_times)

# Print the result
print(min_time)