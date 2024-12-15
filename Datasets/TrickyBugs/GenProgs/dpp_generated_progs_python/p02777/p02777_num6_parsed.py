# Program:

# Reading input from user
S, T = input().split()
A, B = map(int, input().split())
U = input()

# Updating the count of balls
if U == S:
    A -= 1
if U == T:
    B -= 1

# Printing the result
print(A, B)