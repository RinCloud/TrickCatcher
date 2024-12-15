N, M = map(int, input().split())
balls = [0] * N
balls[0] = 1

for _ in range(M):
    x, y = map(int, input().split())
    if balls[x-1] == 1:
        balls[y-1] = 1
    if balls[x-1] == 1:
        balls[x-1] -= 1

print(sum(balls))