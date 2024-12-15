# Taking input
S, T = input().split()
A, B = map(int, input().split())
U = input()

# Counting the remaining balls
rem_S = A - (U == S)
rem_T = B - (U == T)

# Printing the output
print(rem_S, rem_T)