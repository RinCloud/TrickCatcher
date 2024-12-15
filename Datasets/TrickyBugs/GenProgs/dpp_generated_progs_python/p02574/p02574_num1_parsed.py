'''
import math

# function to check if two numbers are coprime
def is_coprime(a, b):
    return math.gcd(a, b) == 1

# function to check if a list of numbers is pairwise coprime
def is_pairwise_coprime(numbers):
    n = len(numbers)
    for i in range(n):
        for j in range(i+1, n):
            if not is_coprime(numbers[i], numbers[j]):
                return False
    return True

# function to check if a list of numbers is setwise coprime
def is_setwise_coprime(numbers):
    gcd = numbers[0]
    for i in range(1, len(numbers)):
        gcd = math.gcd(gcd, numbers[i])
    return gcd == 1

# read input
N = int(input())
A = list(map(int, input().split()))

# check if the numbers are pairwise coprime
if is_pairwise_coprime(A):
    print("pairwise coprime")
elif is_setwise_coprime(A):
    print("setwise coprime")
else:
    print("not coprime")
'''