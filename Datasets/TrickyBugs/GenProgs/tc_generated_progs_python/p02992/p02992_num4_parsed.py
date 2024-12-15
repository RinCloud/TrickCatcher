def main():
    MOD=10**9+7
    n, k = map(int, input().split())
    
    cnt = [0]
    for i in range(1, n+1):
        cnt.append(cnt[-1] + (n//i)**(k-1) - (n//(i+1))**(k-1))
    
    kind = len(cnt)
    dp = [cnt] + [[0] * kind for _ in range(k-1)]
    
    for i in range(1, k):
        for j in range(1, kind):
            dp[i][j] = (dp[i-1][kind-j] * (cnt[j] - cnt[j-1])) % MOD
    
    print(dp[-1][kind-1])
    return

if __name__ == '__main__':
    main()
