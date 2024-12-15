import math

def max_divisible_by_2(N):
    max_count = 0
    max_num = None
    for i in range(1, N+1):
        count = 0
        num = i
        while num % 2 == 0:
            num = num // 2
            count += 1
        if count > max_count:
            max_count = count
            max_num = i
    return max_num

N = int(input())
print(max_divisible_by_2(N))