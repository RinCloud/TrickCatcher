# Program

import math

# Reading input N
N = int(input())

# Reading input sequence A
A = list(map(int, input().split()))

# Function to calculate least common multiple (lcm) of two numbers
def lcm(a, b):
    return a * b // math.gcd(a, b)

# Initializing sum of lcm to 0
sum_of_lcm = 0

# Calculating sum of lcm
for i in range(N - 1):
    for j in range(i + 1, N):
        sum_of_lcm += lcm(A[i], A[j])

# Printing the sum modulo 998244353
print(sum_of_lcm % 998244353)