from math import gcd

def is_pairwise_coprime(numbers):
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if gcd(numbers[i], numbers[j]) != 1:
                return False
    return True

def is_setwise_coprime(numbers):
    gcd_result = numbers[0]
    for i in range(1, len(numbers)):
        gcd_result = gcd(gcd_result, numbers[i])
    return gcd_result == 1

def determine_coprime(numbers):
    if is_pairwise_coprime(numbers):
        return 'pairwise coprime'
    elif is_setwise_coprime(numbers):
        return 'setwise coprime'
    else:
        return 'not coprime'

N = int(input())
A = list(map(int, input().split()))
print(determine_coprime(A))