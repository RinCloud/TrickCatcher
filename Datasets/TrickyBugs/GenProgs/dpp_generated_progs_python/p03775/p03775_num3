import math

def get_min_number_of_digits(N):
    min_digits = math.inf
    for i in range(1, int(math.sqrt(N)) + 1):
        if N % i == 0:
            A = i
            B = N // i
            min_digits = min(min_digits, max(len(str(A)), len(str(B))))
    return min_digits

N = int(input())
print(get_min_number_of_digits(N))