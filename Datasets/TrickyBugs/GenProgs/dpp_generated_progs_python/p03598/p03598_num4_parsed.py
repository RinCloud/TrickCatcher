def minimum_distance(N, K, x):
    total_distance = 0
    for i in range(N):
        distance_A = abs(x[i] - 0) + abs(0 - i)
        distance_B = abs(x[i] - K) + abs(K - i)
        total_distance += min(distance_A, distance_B)
    return total_distance

N = int(input())
K = int(input())
x = list(map(int, input().split()))

result = minimum_distance(N, K, x)
print(result)