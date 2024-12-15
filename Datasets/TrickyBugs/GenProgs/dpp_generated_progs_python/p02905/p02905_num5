import math

MOD = 998244353

# Function to calculate LCM
def lcm(a, b):
    return (a * b) // math.gcd(a, b)

# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate the sum of lcm(A[i], A[j]) for every i and j
sum_lcm = 0
for i in range(N-1):
    for j in range(i+1, N):
        sum_lcm += lcm(A[i], A[j])
        sum_lcm %= MOD

# Print the sum modulo 998244353
print(sum_lcm)