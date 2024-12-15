# Read input
N, M, K = map(int, input().split())
S = input().strip()
T = input().strip()

# Convert X and Y from binary to decimal
X = int(S, 2)
Y = int(T, 2)

# Repeat operation K times
for _ in range(K):
    # Compute bitwise AND of X and Y
    Z = X & Y

    # Add Z to X and Y
    X += Z
    Y += Z

# Convert X and Y from decimal to binary
X = bin(X)[2:].zfill(N)
Y = bin(Y)[2:].zfill(M)

# Print the resulting numbers
print(X)
print(Y)