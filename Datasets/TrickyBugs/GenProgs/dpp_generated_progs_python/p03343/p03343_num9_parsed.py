# program to find the smallest possible value of X-Y

# read the input values
N, K, Q = map(int, input().split())
sequence = list(map(int, input().split()))

# initialize variables with large values
min_diff = float('inf')
max_value = -float('inf')
min_value = float('inf')

# iterate over all possible sub sequences of length K
for i in range(N-K+1):
    sub_sequence = sequence[i:i+K]
    sub_sequence.sort()
    for j in range(Q):
        # remove the smallest element from sub sequence
        sub_sequence.pop(0)
        # update the maximum and minimum values among the removed elements
        max_value = max(max_value, max(sub_sequence))
        min_value = min(min_value, min(sub_sequence))
        # update the minimum difference
        min_diff = min(min_diff, max_value - min_value)

# print the smallest possible value of X-Y
print(min_diff)