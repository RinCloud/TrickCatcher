# Function to calculate the minimum time needed to collect all coins and go to the exit
def calculate_min_time(N, E, T, bears):
    # Calculate the total time needed to collect all coins
    total_time = 0
    for bear_position in bears:
        time_to_reach_bear = bear_position - 0
        time_to_collect_coin = time_to_reach_bear + T
        total_time += time_to_collect_coin

    # Calculate the time to reach the exit
    time_to_reach_exit = E - 0

    # Calculate the minimum time needed
    min_time = max(total_time, time_to_reach_exit)

    return min_time

# Read input values
N, E, T = map(int, input().split())
bears = list(map(int, input().split()))

# Calculate and print the minimum time
print(calculate_min_time(N, E, T, bears))