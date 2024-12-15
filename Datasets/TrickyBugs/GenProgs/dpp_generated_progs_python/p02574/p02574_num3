import math

def find_gcd(a, b):
    if b == 0:
        return a
    return find_gcd(b, a % b)

def is_pairwise_coprime(numbers):
    n = len(numbers)
    for i in range(n):
        for j in range(i+1, n):
            if find_gcd(numbers[i], numbers[j]) != 1:
                return False
    return True

def is_setwise_coprime(numbers):
    gcd = numbers[0]
    for i in range(1, len(numbers)):
        gcd = find_gcd(gcd, numbers[i])
    return gcd == 1

# Read input from standard input
N = int(input())
A = list(map(int, input().split()))

if is_pairwise_coprime(A):
    print("pairwise coprime")
elif is_setwise_coprime(A):
    print("setwise coprime")
else:
    print("not coprime")