"""
def minimum_mod(L, R):
    min_mod = float('inf')
    for i in range(L, R):
        for j in range(i+1, R+1):
            mod = (i*j) % 2019
            min_mod = min(min_mod, mod)
    return min_mod

# Read input
L, R = map(int, input().split())

# Call the function and print the result
print(minimum_mod(L, R))
"""