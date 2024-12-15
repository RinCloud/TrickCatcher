# PROGRAM

N, K = map(int, input().split())
A = list(map(int, input().split()))

s = []
for i in range(N * K):
    if A[i % N] not in s:
        s.append(A[i % N])
    else:
        while s[-1] == A[i % N]:
            s.pop()

print(" ".join(map(str, s)))