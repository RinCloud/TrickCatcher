def min_total_distance(N, K, coordinates):
    total_distance = 0
    for i in range(N):
        ball_coord = coordinates[i]
        distance_A = abs(ball_coord)
        distance_B = abs(K - ball_coord)
        total_distance += min(distance_A, distance_B) + 2
    return total_distance

N = int(input())
K = int(input())
coordinates = list(map(int, input().split()))

print(min_total_distance(N, K, coordinates))