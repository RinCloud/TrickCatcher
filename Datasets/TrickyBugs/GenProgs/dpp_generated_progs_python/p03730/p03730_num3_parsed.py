def is_possible(A, B, C):
    if C % math.gcd(A, B) == 0:
        return "YES"
    else:
        return "NO"


A, B, C = map(int, input().split())
print(is_possible(A, B, C))
