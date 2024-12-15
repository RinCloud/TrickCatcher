# IMPLEMENTATION

# Reading the input values
N, K = map(int, input().split())
P = list(map(int, input().split()))

# Storing the index of each element in P
index = [0] * N
for i in range(N):
    index[P[i]] = i

# Initializing the count of valid permutations
count = 0

# Checking each possible subarray of length K
for i in range(N - K + 1):
    # Finding the maximum element in the subarray
    max_element = max(P[i:i + K])
    
    # Finding the index of the maximum element
    max_index = index[max_element]
    
    # If the maximum element is not at the last position of the subarray, it cannot be sorted
    if max_index > i + K - 1:
        continue
    
    # If the remaining elements are in increasing order, the subarray can be sorted
    if all(index[P[j]] >= max_index for j in range(i, i + K) if j != max_index):
        count += 1

# Printing the count of valid permutations
print(count)