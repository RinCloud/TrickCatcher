# Program:

def calculate_distance(n, x, y):
    distances = [0] * n
    for k in range(1, n):
        for i in range(1, n + 1):
            for j in range(i + 1, n + 1):
                distance = min(abs(i - j), abs(i - x) + abs(j - y) + 1)
                if distance == k:
                    distances[k] += 1
    return distances

N, X, Y = map(int, input().split())
result = calculate_distance(N, X, Y)
for distance in result[1:]:
    print(distance)