# Generating Python code for the given program intention

def count_integers(N, X, A):
    mod = 998244353

    dp = [0] * (X + 1)
    dp[0] = 1

    for i in range(1, X + 1):
        for j in range(N):
            if i >= A[j]:
                dp[i] = (dp[i] + dp[i - A[j]]) % mod

    return dp[X]

# Reading input
N, X = map(int, input().split())
A = []
for _ in range(N):
    A.append(int(input()))

# Calling the count_integers function
result = count_integers(N, X, A)

# Printing the result
print(result)