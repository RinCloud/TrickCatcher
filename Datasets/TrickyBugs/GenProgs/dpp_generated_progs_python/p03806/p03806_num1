from math import gcd

def solve(N, Ma, Mb, packages):
    # Initialize dp table with a large value
    dp = [[float('inf')] * 401 for _ in range(401)]
    dp[0][0] = 0
    
    # Dynamic programming
    for i in range(N):
        a, b, c = packages[i]
        for j in range(400, -1, -1):
            for k in range(400, -1, -1):
                if dp[j][k] != float('inf'):
                    dp[j+a][k+b] = min(dp[j+a][k+b], dp[j][k] + c)      
    
    # Find the minimum cost for creating substance C
    result = float('inf')
    for i in range(1, 401):
        if i * Ma <= 400 and i * Mb <= 400:
            result = min(result, dp[i*Ma][i*Mb])
    
    # Return the minimum cost or -1 if not possible
    return result if result != float('inf') else -1

# Read the input
N, Ma, Mb = map(int, input().split())
packages = []
for _ in range(N):
    a, b, c = map(int, input().split())
    packages.append((a, b, c))

# Call the solve function and print the result
print(solve(N, Ma, Mb, packages))