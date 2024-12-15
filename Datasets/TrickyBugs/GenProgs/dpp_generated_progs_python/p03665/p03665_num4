# Getting the input
N, P = map(int, input().split())
A = list(map(int, input().split()))

# Count the number of ways to select bags
selected = []
for i in range(2**N):
    total_biscuits = sum([A[j] for j in range(N) if i & (1 << j)])
    if total_biscuits % 2 == P:
        selected.append(i)

# Print the number of ways to select bags
print(len(selected))