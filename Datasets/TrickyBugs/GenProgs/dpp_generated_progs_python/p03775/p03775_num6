import math

def min_value_of_F(N):
    def num_digits(n):
        return int(math.log10(n)) + 1

    min_val = float('inf')
    for i in range(1, int(math.sqrt(N)) + 1):
        if N % i == 0:
            A = i
            B = N // i
            min_val = min(min_val, max(num_digits(A), num_digits(B)))

    return min_val

N = int(input())
print(min_value_of_F(N))