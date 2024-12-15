import math

def count_shichi_go_numbers(N):
    def count_divisors(num):
        count = 0
        i = 1
        while i <= math.sqrt(num):
            if num % i == 0:
                if num / i == i:
                    count += 1
                else:
                    count += 2
            i += 1
        return count

    factorial = math.factorial(N)
    count = 0
    for i in range(1, factorial + 1):
        if count_divisors(i) == 75:
            count += 1

    return count

N = int(input())
print(count_shichi_go_numbers(N))