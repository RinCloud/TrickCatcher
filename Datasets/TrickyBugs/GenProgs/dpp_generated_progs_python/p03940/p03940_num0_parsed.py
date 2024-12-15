def min_time_to_collect_coins(N, E, T, bears):
    # Calculate the distance between each adjacent bear and the exit
    distances = [E - bears[i] for i in range(N)]
    
    # Calculate the total time required to give candies to all bears and collect all coins
    total_time = T * (N - 1)
    
    # Calculate the minimum time required to go to the exit from any bear
    min_time_to_exit = min(distances)
    
    # Add the minimum time to go to the exit to the total time
    total_time += min_time_to_exit
    
    # Return the minimum time required to collect all coins and go to the exit
    return total_time

# Parse input
N, E, T = input().split()
N = int(N)
E = int(E)
T = int(T)
bears = list(map(int, input().split()))

# Calculate and print the minimum time required to collect all coins and go to the exit
print(min_time_to_collect_coins(N, E, T, bears))