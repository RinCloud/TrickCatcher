N = int(input())
B = list(map(int, input().split()))

A = [0] * (N + 1)
A[1] = B[0]

for i in range(1, N - 1):
    A[i + 1] = min(B[i], B[i - 1])

A[N] = B[N - 2]
  
print(sum(A))