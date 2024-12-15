#Program

# Reading the input from the standard input
A, B, C = map(int, input().split())

# Checking if the given phrases can form a Haiku
if A == 5 and B == 7 and C == 5:
    print("YES")
else:
    print("NO")