MOD = 10**9 + 7

def count_order(N, A):
    ans = 1
    sum_A = sum(A)
    if sum_A % 2 == 1:
        return 0
    
    sum_A //= 2
    
    cnt = [0] * (N+1)
    for a in A:
        cnt[a] += 1
    
    for i in range(1, N+1):
        if cnt[i] > 2:
            return 0

        for j in range(cnt[i]):
            ans = (ans * j) % MOD
            ans = (ans * pow(j+1, MOD-2, MOD)) % MOD

    two_cnt = 0
    res = 0
    left = -1
    right = -1
    for i in range(1, N+1):
        if cnt[i] == 2:
            two_cnt += 1
        elif cnt[i] == 1 and left == -1:
            left = i
        elif cnt[i] == 1 and right == -1:
            right = i
        else:
            return 0
    
    if two_cnt == 0 and left != -1 and right != -1:
        return 1
    
    for k in range(two_cnt, sum_A+1, 2):
        res = (res + comb(sum_A, k)) % MOD

    ans = (ans * res) % MOD
    return ans

def comb(n, k):
    x, y = 1, 1
    for i in range(k):
        x = (x * (n-i)) % MOD
        y = (y * (i+1)) % MOD
    return (x * pow(y, MOD-2, MOD)) % MOD

N = int(input())
A = list(map(int, input().split()))

print(count_order(N, A))