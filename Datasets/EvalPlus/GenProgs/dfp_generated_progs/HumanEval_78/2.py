def hex_key(num):
    primes = ['2', '3', '5', '7', 'B', 'D']
    count = 0
    for i in num:
        if i in primes:
            count += 1
    return count