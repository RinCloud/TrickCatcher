a, b = map(int, input().split())
if abs(a - b) <= 1 and (a + b) <= 16:
    print("Yay!")
else:
    print(":(")
