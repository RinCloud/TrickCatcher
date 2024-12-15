def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def is_pairwise_coprime(arr):
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if gcd(arr[i], arr[j]) != 1:
                return False
    return True

def is_setwise_coprime(arr):
    gcd_val = arr[0]
    for i in range(1, len(arr)):
        gcd_val = gcd(gcd_val, arr[i])
    return gcd_val == 1

def determine_coprime():
    N = int(input())
    A = list(map(int, input().split()))
    
    if is_pairwise_coprime(A):
        print("pairwise coprime")
    elif is_setwise_coprime(A):
        print("setwise coprime")
    else:
        print("not coprime")

determine_coprime()