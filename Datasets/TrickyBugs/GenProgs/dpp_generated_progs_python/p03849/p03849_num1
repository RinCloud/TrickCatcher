# Program to find the number of pairs of integers u and v 

def count_pairs(N):
    MOD = 10**9 + 7
    # Using dynamic programming to solve subproblems
    dp = [[0] * 2 for _ in range(61)]
    dp[60][0] = 1
    
    for i in range(59, -1, -1):
        for j in range(2):
            bit_N = (N >> i) & 1
            bit_x = (j >> 1) & 1
            bit_y = j & 1
            
            for bit_a in range(2):
                for bit_b in range(2):
                    bit_u = bit_a ^ bit_b
                    bit_v = bit_a + bit_b
                    
                    if bit_u == bit_N and bit_v <= bit_y:
                        dp[i][j] += dp[i+1][2 * bit_x + bit_v]
                        dp[i][j] %= MOD
    
    return (dp[0][0] + dp[0][1]) % MOD


# Taking input from user
N = int(input())

# Calling the count_pairs function to find the count
count = count_pairs(N)

# Printing the result
print(count)