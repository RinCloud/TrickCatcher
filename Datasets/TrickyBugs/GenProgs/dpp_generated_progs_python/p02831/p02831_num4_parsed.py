A, B = map(int, input().split())

def lcm(a, b):
    return abs(a*b) // math.gcd(a, b)

lcm_result = lcm(A, B)
print(lcm_result)