# get the number of problems
n = int(input())

# get the time it takes to solve each problem
times = list(map(int, input().split()))

# get the number of drinks
m = int(input())

# iterate over each drink
for _ in range(m):
    # get the problem and the new time for that problem
    p, x = map(int, input().split())
    
    # calculate the total time with the new time for the problem
    total_time = sum(times) - times[p-1] + x
    
    # print the total time
    print(total_time)