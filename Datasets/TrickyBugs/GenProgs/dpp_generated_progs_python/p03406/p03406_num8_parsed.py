def count_permutations(N, M, A):
    mod = 10**9 + 7

    # Calculate factorial modulo mod
    fact = [1] * (N+1)
    for i in range(1, N+1):
        fact[i] = (fact[i-1] * i) % mod

    # Calculate inverse factorial modulo mod
    inv_fact = [1] * (N+1)
    inv = [1] * (N+1)
    inv[1] = 1
    for i in range(2, N+1):
        inv[i] = mod - (inv[mod%i] * (mod//i)) % mod
    for i in range(1, N+1):
        inv_fact[i] = (inv_fact[i-1] * inv[i]) % mod

    # Initialize dp array
    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1

    # Fill dp array
    for i in range(1, N+1):
        for j in range(N+1):
            dp[i][j] = (dp[i][j] + dp[i-1][j] * (i-1)) % mod
            if j > 0:
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % mod

    # Calculate answer
    answer = 1
    for i in range(1, M+1):
        answer = (answer * dp[N][A[i]-1]) % mod

    return (fact[N] * answer) % mod

# Read input
N, M = map(int, input().split())
A = [0] + list(map(int, input().split()))

# Calculate and print answer
answer = count_permutations(N, M, A)
print(answer)