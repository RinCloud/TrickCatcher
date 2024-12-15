def count_odd_numbers_with_eight_divisors(N):
    count = 0
    for num in range(1, N+1):
        if num % 2 == 1 and count_divisors(num) == 8:
            count += 1
    return count

def count_divisors(n):
    count = 0
    for i in range(1, int(n ** 0.5) + 1):
        if n % i == 0:
            count += 1
            if n // i != i:
                count += 1
    return count

N = int(input())
print(count_odd_numbers_with_eight_divisors(N))