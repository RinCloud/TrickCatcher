import math

def count_odd_numbers_with_eight_divisors(N):

    def count_divisors(number):
        count = 0
        for i in range(1, int(math.sqrt(number)) + 1):
            if number % i == 0:
                count += 2
                if i * i == number:
                    count -= 1
        return count

    count = 0
    for num in range(1, N+1):
        if num % 2 == 1 and count_divisors(num) == 8:
            count += 1

    return count

N = int(input())

result = count_odd_numbers_with_eight_divisors(N)
print(result)