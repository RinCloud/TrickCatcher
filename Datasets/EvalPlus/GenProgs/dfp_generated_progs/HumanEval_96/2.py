def count_up_to(n):
    primes = []
    for num in range(2,n):
        if all(num%i!=0 for i in range(2,num)):
            primes.append(num)
    return primes