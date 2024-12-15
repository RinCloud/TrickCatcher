N, K = map(int, input().split())
A = list(map(int, input().split()))
X = [A[i%N] for i in range(N*K)]

s = []
for x in X:
    if x not in s:
        s.append(x)
    else:
        while s and s[-1] == x:
            s.pop()

print(*s)