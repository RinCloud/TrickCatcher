def solve(N, X, A):
    mod = 998244353
    cnt = [0] * (X + 1)
    cnt[0] = 1
    
    for i in range(X + 1):
        if cnt[i] == 0:
            continue
        
        for j in A:
            cnt[i & j] = (cnt[i & j] + cnt[i]) % mod
            cnt[i | j] = (cnt[i | j] + cnt[i]) % mod
            cnt[i ^ j] = (cnt[i ^ j] + cnt[i]) % mod
    
    return cnt[X]

N, X = map(int, input().split())
A = [int(input(), 2) for _ in range(N)]
print(solve(N, X, A))