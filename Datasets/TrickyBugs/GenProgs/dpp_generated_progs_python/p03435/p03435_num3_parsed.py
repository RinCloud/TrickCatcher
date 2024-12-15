a1, a2, a3, b1, b2, b3 = 0, 0, 0, 0, 0, 0

c11, c12, c13 = map(int, input().split())
c21, c22, c23 = map(int, input().split())
c31, c32, c33 = map(int, input().split())

a1 = c11 - c12
a2 = c21 - c22
a3 = c31 - c32

b1 = c11 - c21
b2 = c12 - c22
b3 = c13 - c23

if a1 == a2 and a2 == a3 and b1 == b2 and b2 == b3:
    print("Yes")
else:
    print("No")