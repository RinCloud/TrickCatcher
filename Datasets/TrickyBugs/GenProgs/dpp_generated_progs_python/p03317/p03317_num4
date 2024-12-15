N, K = map(int, input().split())
A = list(map(int, input().split()))

count = 0
for i in range(N):
    if i + K > N:
        count += 1
        break
    if A[i: i + K] != sorted(A[i: i + K]):
        count += 1

print(count)