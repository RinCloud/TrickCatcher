# Read input
N = int(input())
seqA = []
seqB = []
for _ in range(N):
    a, b = map(int, input().split())
    seqA.append(a)
    seqB.append(b)

# Initialize variables
candy_count = 0
max_candy_count = float('-inf')

# Loop until the sequences A and B are equal
while seqA != seqB:
    # Find the minimum element in A
    minA = min(seqA)
    # Find the minimum element in B with the same index as minA in A
    minB = min([seqB[i] for i in range(N) if seqA[i] == minA])
    # Decrease the chosen elements by 1
    seqA[seqA.index(minA)] -= 1
    seqB[seqB.index(minB)] -= 1
    # Give one candy to Takahashi
    candy_count += 1
    # Update the maximum candy count
    max_candy_count = max(max_candy_count, candy_count)

# Print the maximum candy count
print(max_candy_count)