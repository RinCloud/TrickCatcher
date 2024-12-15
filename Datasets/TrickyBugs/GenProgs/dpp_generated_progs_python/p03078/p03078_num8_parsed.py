import heapq

X, Y, Z, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

# Calculate all possible sums of deliciousness
sums = []
for a in A:
    for b in B:
        for c in C:
            sums.append(a + b + c)

# Get the top K sums
top_k_sums = heapq.nlargest(K, sums)

# Print the top K sums
for sum in top_k_sums:
    print(sum)