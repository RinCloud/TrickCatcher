# Program:

N = int(input())
balls = list(map(int, input().split()))

count = {}

for ball in balls:
    if ball not in count:
        count[ball] = 0
    count[ball] += 1

for k in range(N):
    ans = 0
    ans += count[balls[k]] - 1
    print(ans)