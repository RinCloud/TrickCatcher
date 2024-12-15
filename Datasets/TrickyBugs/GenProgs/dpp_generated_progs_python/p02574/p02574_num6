from math import gcd

def is_pairwise_coprime(nums):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if gcd(nums[i], nums[j]) != 1:
                return False
    return True

def is_setwise_coprime(nums):
    if gcd(*nums) == 1:
        return True
    return False

def determine_coprime(nums):
    if is_pairwise_coprime(nums):
        print("pairwise coprime")
    elif is_setwise_coprime(nums):
        print("setwise coprime")
    else:
        print("not coprime")

# Read input from stdin
N = int(input())
A = list(map(int, input().split()))

# Call the function to determine co-prime
determine_coprime(A)