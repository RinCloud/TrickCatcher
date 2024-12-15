N, K = map(int, input().split())
A = list(map(int, input().split()))

count = {}
s = []

for i in range(N * K):
    if A[i % N] not in count:
        s.append(A[i % N])
        count[A[i % N]] = True
    else:
        while s[-1] != A[i % N]:
            count.pop(s.pop())
        
print(' '.join(map(str, s)))