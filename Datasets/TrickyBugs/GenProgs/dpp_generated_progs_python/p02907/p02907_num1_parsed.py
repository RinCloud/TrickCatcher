# Start of program

MOD = 998244353

# Function to calculate the modular inverse of a number
def mod_inverse(a, m):
    if m == 1:
        return 0
    m0 = m
    y = 0
    x = 1
    while a > 1:
        q = a // m
        t = m
        m = a % m
        a = t
        t = y
        y = x - q * y
        x = t
    if x < 0:
        x = x + m0
    return x

def expected_generations(N, AB):
    S = sum(a for a, _ in AB)
    dp = [[0] * (S + 1) for _ in range(N + 1)]
    dp[0][0] = 1
    for i in range(1, N + 1):
        a, b = AB[i - 1]
        inv_a = mod_inverse(a, MOD)
        sum_ab = sum(dp[i - 1][j] for j in range(S + 1))
        for j in range(S + 1):
            dp[i][j] = sum_ab * inv_a % MOD
            sum_ab = (sum_ab - dp[i - 1][j] + dp[i - 1][j + a]) % MOD
    ans = 0
    for j in range(S + 1):
        cnt = 0
        for i in range(1, N + 1):
            cnt += dp[i][j]
        ans = (ans + cnt) % MOD
    return ans

# Read input
N = int(input())
AB = []
for _ in range(N):
    a, b = map(int, input().split())
    AB.append((a, b))

# Calculate and print the expected number of times Snuke will generate an integer
print(expected_generations(N, AB))

# End of program