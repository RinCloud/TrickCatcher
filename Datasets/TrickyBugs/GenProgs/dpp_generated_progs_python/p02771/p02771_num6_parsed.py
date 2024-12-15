a, b, c = map(int, input().split())

if a == b and b != c:
    print("Yes")
elif a == c and c != b:
    print("Yes")
elif b == c and c != a:
    print("Yes")
else:
    print("No")