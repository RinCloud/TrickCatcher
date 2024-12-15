MOD = 10**9 + 7

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def calculate_gcd_sum(N, K):
    result = 0
    for i in range(1, K+1):
        result = (result + pow(i, N, MOD)) % MOD
    return result

# Read input from standard input
N, K = map(int, input().split())

# Calculate and print the gcd sum
gcd_sum = calculate_gcd_sum(N, K)
print(gcd_sum)