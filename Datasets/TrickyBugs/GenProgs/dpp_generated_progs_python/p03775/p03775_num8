import math

def min_F(N):
    min_digits = math.inf
    
    for i in range(1, int(math.sqrt(N)) + 1):
        if N % i == 0:
            A = i
            B = N // i
            digits = max(len(str(A)), len(str(B)))
            min_digits = min(min_digits, digits)
    
    return min_digits

N = int(input())
print(min_F(N))