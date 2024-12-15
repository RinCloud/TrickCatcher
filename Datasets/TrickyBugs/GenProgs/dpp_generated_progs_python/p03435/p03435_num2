a1 = None
a2 = None
a3 = None
b1 = None
b2 = None
b3 = None

c11, c12, c13 = map(int, input().split())
c21, c22, c23 = map(int, input().split())
c31, c32, c33 = map(int, input().split())

a1 = c11 - c12
a2 = c21 - c22
a3 = c31 - c32

b1 = c11 - c21
b2 = c12 - c22
b3 = c13 - c23

correct = True
if c23 != a2 + b3:
    correct = False
if c33 != a3 + b3:
    correct = False

if correct:
    print("Yes")
else:
    print("No")