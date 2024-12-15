N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

ans = -float('inf')
v = []
for n in range(N):
    loop, score = 0, 0
    t = n
    for i in range(min(N, K)):
        n = P[n]-1
        score += C[n]
        ans = max(ans, score)
        if n == t:
            loop = i+1
            break
    v.append((loop, score))

for n in range(N):
    loop, score = v[n]
    if loop > 0 and score > 0:
        r = (K-1)//loop
        nscore = r*score
        for i in range(K-r*loop):
            n = P[n]-1
            nscore += C[n]
            ans = max(nscore, ans)
print(ans)