import math

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def check_coprime(arr):
    n = len(arr)
    max_gcd = max(arr)

    for i in range(n):
        for j in range(i + 1, n):
            if gcd(arr[i], arr[j]) != 1:
                return False
        
    if gcd(*arr) == 1:
        return True
    else:
        return False

def main():
    # Read input
    n = int(input())
    arr = list(map(int, input().split()))
    
    # Check if pairwise coprime
    if check_coprime(arr):
        print("pairwise coprime")
    # Check if setwise coprime
    elif math.gcd(*arr) == 1:
        print("setwise coprime")
    else:
        print("not coprime")

if __name__ == '__main__':
    main()