'''
N = int(input())
A = list(map(int, input().split()))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def reduce_health(a, b):
    return gcd(a, b)

min_health = min(A)
while len(A) > 1:
    A.sort()
    A = [reduce_health(A[i], A[i-1]) for i in range(1, len(A), 2)]
    if len(A) % 2:
        A = [A[-1]] + A[:-1]
    min_health = min(min_health, min(A))

print(min_health)
'''