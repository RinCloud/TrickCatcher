import itertools

N = int(input())
points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

MOD = 998244353

def f(T):
    x_vals = [point[0] for point in T]
    y_vals = [point[1] for point in T]
    a = min(x_vals)
    b = max(x_vals)
    c = min(y_vals)
    d = max(y_vals)
    count = 0
    for i in range(N):
        if a <= points[i][0] <= b and c <= points[i][1] <= d:
            count += 1
    return count

result = 0
for i in range(1, N+1):
    for combination in itertools.combinations(points, i):
        result = (result + f(combination)) % MOD

print(result)