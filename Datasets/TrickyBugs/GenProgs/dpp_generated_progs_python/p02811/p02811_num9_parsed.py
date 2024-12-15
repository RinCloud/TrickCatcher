# Given Input parsing
K, X = map(int, input().split())

# Check if sum of coins is greater than or equal to X
if K * 500 >= X:
    print("Yes")
else:
    print("No")