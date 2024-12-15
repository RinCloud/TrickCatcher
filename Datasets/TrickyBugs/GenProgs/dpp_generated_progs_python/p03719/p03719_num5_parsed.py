# Given three integers A, B, and C
# Check if C is not less than A and not greater than B

# Read input values A, B, and C
A, B, C = map(int, input().split())

# Check if C is not less than A and not greater than B
if A <= C <= B:
    print("Yes")
else:
    print("No")