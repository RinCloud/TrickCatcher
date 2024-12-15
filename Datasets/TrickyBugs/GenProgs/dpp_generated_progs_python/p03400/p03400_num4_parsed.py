# Getting input values
N = int(input())
D, X = map(int, input().split())
A = [int(input()) for _ in range(N)]

# Calculating the number of chocolate pieces prepared at the beginning
chocolates = X
for i in range(N):
    chocolates += (D - 1) // A[i] + 1

# Printing the result
print(chocolates)