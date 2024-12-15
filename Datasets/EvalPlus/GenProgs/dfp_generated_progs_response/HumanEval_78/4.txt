def hex_key(num):
    count = 0
    
    # create a set of prime hexadecimal digits
    primes = {'2', '3', '5', '7', 'B', 'D'}
    
    # iterate through each character in the hexadecimal number
    for char in num:
        # if the character is a prime hexadecimal digit, increment the count
        if char in primes:
            count += 1
    
    return count