from bisect import bisect_left

def is_feasible(N, D, distances, Q, queries):
    # calculate the prefix sum of the distances
    prefix_sum = [0] * (N+1)
    for i in range(1, N+1):
        prefix_sum[i] = prefix_sum[i-1] + distances[i-1]
    
    # check feasibility for each query
    result = []
    for q in queries:
        distance = prefix_sum[q] % D
        # check if the vehicle can reach the destination by adding the current distance
        if distance <= prefix_sum[N] - prefix_sum[q]:
            result.append("YES")
        else:
            result.append("NO")
            
    return result

# read input
N, D = map(int, input().split())
distances = list(map(int, input().split()))
Q = int(input())
queries = list(map(int, input().split()))

# call the function and print the result
result = is_feasible(N, D, distances, Q, queries)
for r in result:
    print(r)