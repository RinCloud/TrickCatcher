import itertools

N = int(input())
points = [list(map(int, input().split())) for _ in range(N)]

def f(T):
    min_x = min(T, key=lambda point: point[0])[0]
    max_x = max(T, key=lambda point: point[0])[0]
    min_y = min(T, key=lambda point: point[1])[1]
    max_y = max(T, key=lambda point: point[1])[1]
    
    count = 0
    for point in points:
        if min_x <= point[0] <= max_x and min_y <= point[1] <= max_y:
            count += 1
    
    return count

total_sum = 0
for size in range(1, N+1):
    for subset in itertools.combinations(points, size):
        total_sum += f(subset)

print(total_sum % 998244353)