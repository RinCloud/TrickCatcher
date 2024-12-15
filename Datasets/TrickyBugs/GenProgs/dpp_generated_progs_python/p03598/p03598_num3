def min_distance_covered(N, K, x):
    total_distance = 0
    for i in range(N):
        distance = min(x[i], K - x[i])
        total_distance += distance * 2
    return total_distance

N = int(input())
K = int(input())
x = list(map(int, input().split()))

result = min_distance_covered(N, K, x)
print(result)