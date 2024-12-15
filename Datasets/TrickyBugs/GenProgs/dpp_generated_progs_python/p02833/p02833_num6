import math

def count_trailing_zeros(N):
    count = 0
    
    while N >= 5:
        N //= 5
        count += N
    
    return count

N = int(input())
result = count_trailing_zeros(N)
print(result)