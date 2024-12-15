# Let's generate the python program to achieve the given intention

# Read the inputs
N, K = map(int, input().split())
S = input()

# Perform the operations K times
for _ in range(K):
    T = S[::-1]  # Reverse the string
    U = S + T  # Concatenate S and T
    S = min(U[i:i+N] for i in range(len(S)+1-N))  # Find lexicographically smallest substring of U with length N

# Print the resulting string
print(S)