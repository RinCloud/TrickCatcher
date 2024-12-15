a, b, c = map(int, input().split())

if (a + b + c) % 2 == 0 and (a == (b + c) // 2 or b == (a + c) // 2 or c == (a + b) // 2):
    print("Yes")
else:
    print("No")