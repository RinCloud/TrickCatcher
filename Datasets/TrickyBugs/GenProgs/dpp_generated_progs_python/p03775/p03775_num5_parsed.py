def min_digits(N):
    min_val = float('inf')
    sqrt_N = int(N ** 0.5)
    
    for i in range(1, sqrt_N + 1):
        if N % i == 0:
            A = i
            B = N // i
            num_digits = max(len(str(A)), len(str(B)))
            min_val = min(min_val, num_digits)
    
    return min_val

N = int(input())
result = min_digits(N)
print(result)