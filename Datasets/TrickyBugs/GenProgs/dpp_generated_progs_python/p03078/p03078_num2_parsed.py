import heapq

X, Y, Z, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

# Calculate the sums of deliciousness for all combinations
sums = []
for a in A:
    for b in B:
        for c in C:
            sums.append(a + b + c)

# Sort the sums in descending order
sums.sort(reverse=True)

# Print the top K sums
for i in range(K):
    print(sums[i])