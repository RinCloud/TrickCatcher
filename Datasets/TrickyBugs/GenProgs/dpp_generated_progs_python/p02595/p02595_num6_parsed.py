import math

N, D = map(int, input().split())

count = 0
for _ in range(N):
    X, Y = map(int, input().split())
    distance = math.sqrt(X**2 + Y**2)
    if distance <= D:
        count += 1

print(count)