def count_combinations(n, k, a):
    mod = 1000000007
    max_bits = 60  # maximum number of bits to consider
    
    # Initialize dp array
    dp = [[0] * max_bits for _ in range(n+1)]
    
    # Base case
    dp[0][0] = 1
    
    for i in range(1, n+1):
        for j in range(max_bits):
            count_0 = bin(a[i-1]).count('0')  # count number of 0s in binary representation of a[i-1]
            
            # Operation A: divide all numbers by 2
            # Let X be the number of bits in a[i-1] which are set to 1
            # We can get X-1, X-2, ..., 1 by dividing all numbers by 2
            for x in range(count_0, j+1):
                dp[i][j] = (dp[i][j] + dp[i-1][x]) % mod
            
            # Operation B: subtract 1 from all numbers
            if j > 0:
                dp[i][j] = (dp[i][j] + dp[i-1][j-1] * (a[i-1] & 1)) % mod
    
    # Sum all possible combinations of numbers
    result = 0
    for j in range(max_bits):
        result = (result + dp[n][j]) % mod
    
    return result

# Read input
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Compute and print the number of different combinations
print(count_combinations(n, k, a))