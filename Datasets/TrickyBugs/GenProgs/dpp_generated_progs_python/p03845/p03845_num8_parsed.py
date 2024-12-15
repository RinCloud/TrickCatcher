N = int(input())
t = list(map(int, input().split()))
M = int(input())
for _ in range(M):
    p, x = map(int, input().split())
    total = sum(t) - t[p-1] + x
    print(total)
