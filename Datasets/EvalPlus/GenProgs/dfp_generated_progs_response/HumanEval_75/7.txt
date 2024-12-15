def is_multiply_prime(a):
    # initialize a list to store the prime numbers
    primes = []
    
    # loop through numbers from 2 to a+1
    for num in range(2, a+1):
        # check if num is a prime number
        is_prime = True
        for i in range(2, num):
            if num % i == 0:
                is_prime = False
                break
        
        # if num is prime, append it to the primes list
        if is_prime:
            primes.append(num)
            
        # if the length of the primes list is 3 and the product is equal to a, return True
        if len(primes) == 3 and primes[0] * primes[1] * primes[2] == a:
            return True
    
    # if no product of 3 prime numbers is equal to a, return False
    return False