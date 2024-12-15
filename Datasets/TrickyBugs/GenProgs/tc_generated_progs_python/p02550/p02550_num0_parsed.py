N, X, M = map(int, input().split())
ans = 0
al = [X]
for i in range(N):
    ans += X
    X = (X**2) % M
    if X in al:
        start = al.index(X)
        loop = i - start + 1
        ans += sum(al[start:i + 1]) * ((N - i - 1) // loop)
        for j in range((N - i - 1) % loop):
            ans += al[start + j]
        break
    al.append(X)
print(ans)
