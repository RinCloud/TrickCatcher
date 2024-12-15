import math

def smallest_sum_of_digits(K):
    min_sum = math.inf
    
    for i in range(1, 10):
        num = K * i
        digit_sum = sum(int(digit) for digit in str(num))
        min_sum = min(min_sum, digit_sum)
    
    return min_sum

K = int(input())
print(smallest_sum_of_digits(K))