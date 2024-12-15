mod = 998244353

def check_generations(N, A, B):
    S = sum(A)
    dp = [0] * (sum(B) + 1)
    dp[0] = 1

    for i in range(N):
        for j in range(sum(B)-B[i], -1, -1):
            for k in range(1, min(B[i]+1, j+1)):
                dp[j] = (dp[j] + dp[j-k] * A[i] % mod) % mod

    ans = 0
    for i in range(sum(B)):
        ans = (ans + dp[i] * (i+1)) % mod

    return ans

if __name__ == "__main__":
    N = int(input())
    A = []
    B = []
    for _ in range(N):
        a, b = map(int, input().split())
        A.append(a)
        B.append(b)

    result = check_generations(N, A, B)
    print(result)
