# Program to find the number of pairs of integers (x, y) satisfying the condition

# Function to calculate XOR of two numbers
def xor(x, y):
    xor_val = x ^ y
    return xor_val

# Function to count pairs of integers
def count_pairs(L, R):
    count = 0
    MOD = 10**9 + 7
    for x in range(L, R+1):
        for y in range(x, R+1):
            if (y % x) == xor(x, y):
                count += 1
    return count % MOD
    
# Read input from standard input
L, R = map(int, input().split())

# Call the count_pairs function and print the result
print(count_pairs(L, R))