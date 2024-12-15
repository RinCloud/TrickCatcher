import math

def find_maximum_gcd(N, M):
    # Calculate the maximum possible value of gcd
    gcd = math.gcd(M, N)
    
    return gcd

# Read the input N and M
N, M = map(int, input().split())

# Find the maximum possible value of gcd
maximum_gcd = find_maximum_gcd(N, M)

# Print the maximum possible value of gcd
print(maximum_gcd)