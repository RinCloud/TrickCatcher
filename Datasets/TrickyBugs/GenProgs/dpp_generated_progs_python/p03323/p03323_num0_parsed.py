A, B = map(int, input().split())

if abs(A - B) <= 1 and A + B <= 16:
    print("Yay!")
else:
    print(":(")