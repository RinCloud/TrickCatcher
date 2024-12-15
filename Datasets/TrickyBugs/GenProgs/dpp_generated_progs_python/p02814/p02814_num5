"""
import math

def count_semi_common_multiples(N, M, A):
    count = 0
    
    # calculate the least common multiple of all elements in A
    lcm = A[0]
    for i in range(1, N):
        lcm = lcm * A[i] // math.gcd(lcm, A[i])
    
    # calculate the number of semi-common multiples between 1 and M
    for X in range(1, M+1):
        for k in range(N):
            p = (X / A[k]) - 0.5
            if p >= 0 and p.is_integer():
                count += 1
                break
    
    return count


# Read input values
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Call the function and print the result
result = count_semi_common_multiples(N, M, A)
print(result)
"""