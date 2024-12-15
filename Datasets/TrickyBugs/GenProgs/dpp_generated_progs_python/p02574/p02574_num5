import math

def is_pairwise_coprime(nums):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if math.gcd(nums[i], nums[j]) != 1:
                return False
    return True

def is_setwise_coprime(nums):
    gcd = nums[0]
    for i in range(1, len(nums)):
        gcd = math.gcd(gcd, nums[i])
        if gcd == 1:
            return False
    return True

N = int(input())
A = list(map(int, input().split()))

if is_pairwise_coprime(A):
    print("pairwise coprime")
elif is_setwise_coprime(A):
    print("setwise coprime")
else:
    print("not coprime")