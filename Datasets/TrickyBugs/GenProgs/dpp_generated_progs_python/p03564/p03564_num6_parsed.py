N = int(input())
K = int(input())

if K == 1:
    print(N)
else:
    ans = 1
    for _ in range(N):
        ans += min(ans, K)
    print(ans)