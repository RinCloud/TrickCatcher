# Reading input from standard input
N = int(input())
D, X = map(int, input().split())
A = [int(input()) for _ in range(N)]

# Counting the total number of chocolate pieces eaten
total_chocolates = X
for i in range(N):
    total_chocolates += (D - 1) // A[i] + 1

# Printing the number of chocolate pieces prepared at the beginning
print(total_chocolates)