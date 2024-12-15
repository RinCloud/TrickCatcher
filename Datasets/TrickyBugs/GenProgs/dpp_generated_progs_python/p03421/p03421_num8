import sys

N, A, B = map(int, sys.stdin.readline().split())

if A + B > N + 1 or A * B < N:
    print("-1")
else:
    nums = list(range(1, B+1))
    for i in range(A-B):
        nums.append(B)
    for i in range(B+1, N+1):
        nums.append(i)
    print(*nums)