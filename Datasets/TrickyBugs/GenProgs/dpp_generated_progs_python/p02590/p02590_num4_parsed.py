# Program

P = 200003

# Input
N = int(input())
A = list(map(int, input().split()))

# Calculate the sum of ((A_i * A_j) % P) over all unordered pairs (i, j)
sum_pairs = 0
for i in range(N):
    for j in range(i+1, N):
        sum_pairs += (A[i] * A[j]) % P

# Output
print(sum_pairs)