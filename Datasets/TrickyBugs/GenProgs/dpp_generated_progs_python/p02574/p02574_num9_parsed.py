from math import gcd

def determine_coprime(n, arr):
    pairwise_coprime = True
    setwise_coprime = False

    # Check if pairwise coprime
    for i in range(n):
        for j in range(i + 1, n):
            if gcd(arr[i], arr[j]) != 1:
                pairwise_coprime = False
                break
    
    # Check if setwise coprime
    if gcd(*arr) == 1:
        setwise_coprime = True

    # Determine the type of coprime
    if pairwise_coprime:
        return "pairwise coprime"
    elif setwise_coprime:
        return "setwise coprime"
    else:
        return "not coprime"

# Read input
n = int(input())
arr = list(map(int, input().split()))

# Determine coprime type
result = determine_coprime(n, arr)

# Print the result
print(result)