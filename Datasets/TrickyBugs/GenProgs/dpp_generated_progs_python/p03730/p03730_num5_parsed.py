A, B, C = map(int, input().split())

if C % math.gcd(A, B) == 0:
    print("YES")
else:
    print("NO")
