# Program:

A, B = map(int, input().split())

if A == B:
    print("Draw")
elif A == 1 or (B != 1 and A > B):
    print("Alice")
else:
    print("Bob")