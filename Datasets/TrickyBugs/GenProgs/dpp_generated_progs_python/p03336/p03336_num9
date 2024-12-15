# Taking input
N, M, K = map(int, input().split())
S = input().strip()
T = input().strip()

# Converting input strings to integers
X = int(S, 2)  # X represents the number initially kept by Takahashi
Y = int(T, 2)  # Y represents the number initially kept by Aoki

# Performing bitwise AND and addition operation K times
for _ in range(K):
    Z = X & Y  # Computing bitwise AND
    X += Z  # Adding Z to Takahashi's number
    Y += Z  # Adding Z to Aoki's number

# Converting the updated numbers back to binary strings
X_bin = bin(X)[2:].zfill(N)
Y_bin = bin(Y)[2:].zfill(M)

# Printing the final numbers
print(X_bin)
print(Y_bin)