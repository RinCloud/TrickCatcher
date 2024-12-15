# Program

def minimum_difference(A, B, C):
    min_difference = float('inf')
    
    # Consider all possible pairs of divisors of A*B*C
    for i in range(1, int(A*B*C**0.5) + 1):
        if (A*B*C) % i == 0:
            for j in range(1, int(A*C // i) + 1):
                if (A*C) % j == 0:
                    k = (A*B*C) // (i*j)
                    
                    # Calculate the difference between the number of red and blue blocks
                    difference = abs(i - j) + abs(j - k) + abs(k - i)
                    min_difference = min(min_difference, difference)
    
    return min_difference

A, B, C = map(int, input().split())
result = minimum_difference(A, B, C)
print(result)