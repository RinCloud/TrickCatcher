N = int(input())
A = list(map(int, input().split()))

count = {}

for ball in A:
    count[ball] = count.get(ball, 0) + 1

for i in range(N):
    print((count[A[i]] - 1) // 2)
