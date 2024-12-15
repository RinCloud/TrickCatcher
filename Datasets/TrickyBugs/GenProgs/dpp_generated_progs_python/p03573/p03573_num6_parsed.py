# Given three integers A, B, and C
# Two of them are the same, but the remaining one is different from the rest

# Read input from the user
A, B, C = map(int, input().split())

# Find the different integer among A, B, and C
if A == B:
    print(C)
elif A == C:
    print(B)
else:
    print(A)