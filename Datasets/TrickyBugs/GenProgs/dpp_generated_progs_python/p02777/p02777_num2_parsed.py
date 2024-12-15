# Reading input from Standard Input
S, T = input().split()
A, B = map(int, input().split())
U = input()

# Updating the count of balls
if U == S:
    A -= 1
else:
    B -= 1

# Printing the updated counts
print(A, B)