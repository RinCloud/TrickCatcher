def calculate_distance(N, K, x):
    distance = 0
    
    for i in range(1, N+1):
        distance += min(abs(x[i-1] - 0), abs(x[i-1] - K)) * 2
    
    return distance


N = int(input())
K = int(input())
x = list(map(int, input().split()))

distance = calculate_distance(N, K, x)
print(distance)