# Program

def minimum_distance(N, K, x):
    total_distance = 0
    
    for i in range(N):
        distance1 = abs(x[i] - 0) + abs(K - x[i])
        distance2 = abs(x[i] - K) + abs(K - x[i])
        total_distance += min(distance1, distance2)
    
    return total_distance


# Main
N = int(input())
K = int(input())
x = list(map(int, input().split()))

result = minimum_distance(N, K, x)
print(result)