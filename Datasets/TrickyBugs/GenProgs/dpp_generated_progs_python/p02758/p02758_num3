def count_possible_sets(N, robots):
    mod = 998244353
    
    # Sorting the robots by their position
    robots.sort(key=lambda x: x[0])
    
    # Creating an array to store the count of robots to the right of each robot
    count = [0] * (N+1)
    
    # Initializing the count for the last robot (it's always 1 because the last robot can't activate any other)
    count[N] = 1
    
    # Iterating over the robots from the second to the last
    for i in range(N-1, -1, -1):
        # Checking if the current robot can activate any other robot
        for j in range(i+1, N+1):
            if robots[i][0] + robots[i][1] > robots[j][0]:
                count[i] = (count[i] + count[j]) % mod
            else:
                break
    
    # Calculating the total number of possible sets of robots remaining on the number line
    total_count = 0
    for i in range(N+1):
        total_count = (total_count + count[i]) % mod
    
    # Returning the result
    return total_count

# Getting the input
N = int(input())
robots = []
for _ in range(N):
    X, D = map(int, input().split())
    robots.append((X, D))

# Calling the function and printing the result
print(count_possible_sets(N, robots))