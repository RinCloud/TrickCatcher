S, K = input().split()
K = int(K)

# Construct the final string after 5 * 10^15 days
for i in range(K):
    if S[i] == '1':
        pass
    else:
        S += int(S[i]) * S[i]

# Print the K-th character from the left
print(S[K-1])