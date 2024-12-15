import math

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def solve(N, M_a, M_b, packages):
    min_cost = float('inf')
    
    for i in range(N):
        a_i, b_i, c_i = packages[i]
        if a_i * M_b == b_i * M_a:
            min_cost = min(min_cost, c_i)
        else:
            x = M_a * b_i - M_b * a_i
            y = c_i * M_a * b_i
            
            if x > 0:
                g = gcd(x, M_a * b_i)
            else:
                g = gcd(-x, M_a * b_i)
            
            x //= g
            y //= g
            
            if x > 0:
                min_cost = min(min_cost, y)
    
    if min_cost == float('inf'):
        return -1
    else:
        return min_cost

# Read input
N, M_a, M_b = map(int, input().split())
packages = []
for _ in range(N):
    a_i, b_i, c_i = map(int, input().split())
    packages.append((a_i, b_i, c_i))

# Solve the problem
result = solve(N, M_a, M_b, packages)

# Print the result
print(result)