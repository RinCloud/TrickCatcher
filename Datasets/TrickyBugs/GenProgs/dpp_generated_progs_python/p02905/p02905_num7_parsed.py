from math import gcd

N = int(input())
A = list(map(int, input().split()))

MOD = 998244353

# calculate the least common multiple of two numbers
def lcm(a, b):
    return (a * b) // gcd(a, b)

# calculate the sum of least common multiples
def sum_lcm(A):
    n = len(A)
    result = 0
    for i in range(n-1):
        for j in range(i+1, n):
            result += lcm(A[i], A[j])
            result %= MOD
    return result

answer = sum_lcm(A)
print(answer)