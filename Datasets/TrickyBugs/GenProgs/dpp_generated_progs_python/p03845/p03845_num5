# taking the number of problems as input
N = int(input())

# taking the time taken to solve each problem as input
T = list(map(int, input().split()))

# taking the number of drinks as input
M = int(input())

# list to store the time taken to solve all problems for each drink
results = []

# iterating over the drinks
for _ in range(M):
    # taking the problem number and the modified time as input for each drink
    P, X = map(int, input().split())
    
    # calculating the total time taken to solve all problems if this drink is taken
    total_time = sum(T) - T[P-1] + X
    
    # appending the total time to the results list
    results.append(total_time)

# printing the results
for result in results:
    print(result)