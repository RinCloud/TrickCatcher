def find_gcd(N, M):
    # Calculate the maximum possible value for gcd
    gcd = M // N
    
    # find the gcd of all numbers in the sequence
    for i in range(2, gcd+1):
        if M % i == 0:
            return i
    
    return gcd

# Read input values
N, M = map(int, input().split())

# Find the maximum possible value for gcd
max_gcd = find_gcd(N, M)

# Print the maximum possible value for gcd
print(max_gcd)