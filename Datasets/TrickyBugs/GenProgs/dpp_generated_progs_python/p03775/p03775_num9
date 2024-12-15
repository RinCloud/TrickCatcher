import math

def minimum_digits(N):
    min_digits = float('inf')
    
    for i in range(1, int(math.sqrt(N)) + 1):
        if N % i == 0:
            A = i
            B = N // i
            digits = max(len(str(A)), len(str(B)))
            min_digits = min(min_digits, digits)
    
    return min_digits

N = int(input())
print(minimum_digits(N))