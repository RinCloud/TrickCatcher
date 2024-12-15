import math

N, M = map(int, input().split())

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def max_gcd(N, M):
    gcd_list = []
    for i in range(1, int(math.sqrt(M))+1):
        if M % i == 0:
            gcd_list.append(i)
            gcd_list.append(M//i)
    
    max_gcd = 1
    for gcd_val in gcd_list:
        if gcd_val <= M // N:
            max_gcd = max(max_gcd, gcd_val)
    
    return max_gcd

print(max_gcd(N, M))