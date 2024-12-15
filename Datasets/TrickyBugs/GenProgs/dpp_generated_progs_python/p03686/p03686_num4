def find_additional_chairs(N, M, chairs):
    # create a list to store the end points of each chair
    chair_endpoints = [0] * (M + 2)

    # loop through each person's favorite chairs
    for i in range(N):
        L, R = chairs[i]
        chair_endpoints[L] += 1
        chair_endpoints[R + 1] -= 1
    
    # calculate the cumulative sum of chair endpoints
    cum_sum = [0] * (M + 2)
    for i in range(1, M + 2):
        cum_sum[i] = cum_sum[i-1] + chair_endpoints[i]
    
    # count the number of additional chairs needed
    additional_chairs = max(cum_sum)
    
    return additional_chairs

# read input
N, M = map(int, input().split())
chairs = [list(map(int, input().split())) for _ in range(N)]

# find the minimum required number of additional chairs
result = find_additional_chairs(N, M, chairs)

# print the result
print(result)