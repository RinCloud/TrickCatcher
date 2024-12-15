def calculate_minimum_time(N, E, T, x):
    # function to calculate the minimum time needed
    # to collect all the coins and go to the exit
    
    # check if there are no bears in the game
    if N == 0:
        # return the time needed to go to the exit
        return E
    
    # initialize the variables
    time = 0
    position = 0
    
    # iterate through the bears
    for i in range(N):
        # calculate the time needed to reach the current bear
        time += abs(position - x[i])
        
        # update the position to the current bear
        position = x[i]
        
        # check if the time is a multiple of T
        if time % T == 0:
            # update the time to pick up the coin
            time += T
    
    # calculate the time needed to go to the exit
    time += abs(position - E)
    
    # return the minimum time
    return time


# read the input from standard input
N, E, T = map(int, input().split())
x = list(map(int, input().split()))

# calculate the minimum time
minimum_time = calculate_minimum_time(N, E, T, x)

# print the minimum time
print(minimum_time)