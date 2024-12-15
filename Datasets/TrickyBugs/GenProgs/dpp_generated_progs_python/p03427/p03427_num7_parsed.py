def max_digit_sum(N):
    result = 0
    while N > 0:
        result += N % 10
        N //= 10
    return result

N = int(input())
print(max_digit_sum(N))