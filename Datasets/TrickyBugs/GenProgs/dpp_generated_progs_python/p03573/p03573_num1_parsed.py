# Taking input from user
A, B, C = map(int, input().split())

# Finding the integer different from the rest
if A == B:
    print(C)
elif B == C:
    print(A)
else:
    print(B)