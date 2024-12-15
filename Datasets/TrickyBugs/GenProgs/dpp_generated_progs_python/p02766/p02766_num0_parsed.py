# Getting input from user
N, K = input().split()
N = int(N)
K = int(K)

# Calculating the number of digits using log base K
num_digits = len(str(N))
print(num_digits)