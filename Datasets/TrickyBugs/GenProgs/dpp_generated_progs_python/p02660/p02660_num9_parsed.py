import math

def max_operations(N):
    count = 0
    factors = set()

    while N > 1:
        found = False
        for i in range(2, int(math.sqrt(N)) + 1):
            if N % i == 0 and i not in factors:
                N //= i
                factors.add(i)
                found = True
                break
        
        if not found:
            N = 1

        count += 1

    return count

# Reading input
N = int(input())

# Calculating and printing result
result = max_operations(N)
print(result)