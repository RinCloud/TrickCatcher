N, K = map(int, input().split())
P = list(map(int, input().split()))

# create a list to store the sorted subarrays
sorted_subarrays = []

# iterate over the P list
for i in range(N - K + 1):
    # extract the subarray of length K
    subarray = P[i:i + K]
    # sort the subarray in ascending order
    sorted_subarray = sorted(subarray)
    # append the sorted subarray to the list
    sorted_subarrays.append(sorted_subarray)

# sort the P list
sorted_P = sorted(P)

# find the index of the sorted P list in the list of sorted subarrays
index = sorted_subarrays.index(sorted_P)

# print the number of permutations that can be produced
print(index + 1)