N, M = map(int, input().split())
A = list(map(int, input().split()))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

lcm_val = A[0]
for i in range(1, N):
    lcm_val = lcm(lcm_val, A[i])

count = M // (lcm_val // 2)
print(count)