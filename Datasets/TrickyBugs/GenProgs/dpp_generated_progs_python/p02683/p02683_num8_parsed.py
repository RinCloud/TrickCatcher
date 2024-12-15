N, M, X = map(int, input().split())
inf = 1000000007
ans = inf

for i in range(2 ** N):
    cost = 0
    skills = [0] * M
    for j in range(N):
        if (i >> j) & 1:
            cost += C[j]
            for k in range(M):
                skills[k] += A[j][k]

    if all(x >= X for x in skills):
        ans = min(ans, cost)

if ans == inf:
    print(-1)
else:
    print(ans)