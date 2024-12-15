# Helper function to calculate (a^b) % m
def modulo_power(a, b, m):
    result = 1
    while b > 0:
        if b % 2 == 1:
            result = (result * a) % m
        a = (a * a) % m
        b //= 2
    return result

# Function to calculate the number of pairs satisfying the condition
def count_pairs(L, R):
    MOD = 10**9 + 7
    count = 0
    for x in range(L, R+1):
        for y in range(x, R+1):
            if y % x == (y ^ x):
                count += 1
    
    return count % MOD

# Read input L and R
L, R = map(int, input().split())

# Calculate the number of pairs and print the result
result = count_pairs(L, R)
print(result)