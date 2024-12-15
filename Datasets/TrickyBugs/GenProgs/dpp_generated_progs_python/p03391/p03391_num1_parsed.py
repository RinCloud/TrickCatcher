N = int(input())
A = []
B = []
for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

candies = 0
for i in range(N):
    if A[i] > B[i]:
        candies += B[i]
        A[i] -= B[i]
        B[i] = 0
    else:
        candies += A[i]
        B[i] -= A[i]
        A[i] = 0

for i in range(N):
    if B[i] > 0:
        if A[i] > 0:
            candies += min(A[i], B[i])
            
print(candies)