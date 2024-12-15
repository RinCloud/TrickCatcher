def hex_key(num):
    count = 0
    primes = ['2', '3', '5', '7', 'B', 'D']
    for digit in num:
        if digit in primes:
            count += 1
    return count