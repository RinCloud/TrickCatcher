import math

def find_largest_gcd(N, M):
    # If N is 1, the largest GCD will be M
    if N == 1:
        return M
    
    # Find the largest possible GCD
    largest_gcd = 1
    # Try all possible values of a1
    for a1 in range(1, M+1):
        # Calculate the remaining sum
        remaining_sum = M - a1
        # Calculate the maximum possible value for a2, using the remaining sum
        max_a2 = min(N-1, remaining_sum)
        
        # Calculate the GCD for this combination of a1 and remaining sum
        gcd = math.gcd(a1, remaining_sum)
        
        # If the GCD is larger than the current largest GCD, update it
        if gcd > largest_gcd:
            largest_gcd = gcd
        
    return largest_gcd

# Read input values
N, M = map(int, input().split())

# Call the function and print the result
print(find_largest_gcd(N, M))