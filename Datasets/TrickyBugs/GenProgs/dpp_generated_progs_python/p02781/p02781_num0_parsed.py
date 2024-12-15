import math

def count_numbers(N, K):
    count = 0
    
    for i in range(1, N+1):
        digits = math.floor(math.log10(i)) + 1
        if digits == K:
            count += 1
    
    return count

N = int(input())
K = int(input())

result = count_numbers(N, K)
print(result)