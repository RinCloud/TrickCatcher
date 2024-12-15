def main():
    MOD=10**9+7
    n, k = map(int, input().split())
    t = []  # ｔ＝n//jの種類を数えるのに使う
    t_cnt = []  # tとなるjの個数
    cnt = [0]
    for i in range(1, int(n**0.5)+1):
        tmp = n//i
        if tmp not in t:
            t.append(tmp)
            t_cnt.append(1)
        else:
            cnt[-1] += tmp
            t_cnt[-1] += 1
    for tmp in range(t[-1]-1, 0, -1):
        tmp_j = n//(tmp)-n//(tmp+1)
        if tmp_j != 0:
            t.append(tmp)
            t_cnt.append(tmp_j)

    now = 0
    for i in range(len(t)):
        now += t[i]*t_cnt[i]
        cnt.append(now)
    kind = len(cnt)
    dp = [cnt]+[[0]*kind for i in range(k-1)]

    for i in range(1, k):
        for j in range(kind):
            dp[i][j] = (dp[i-1][kind-j] * t_cnt[j] + dp[i][j-1]) % MOD
    print(dp[-1][-1] % MOD)
    return

if __name__ == '__main__':
    main()
