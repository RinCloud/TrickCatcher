"""
# read N and M from input
N, M = map(int, input().split())

# read the candies from input
A = list(map(int, input().split()))

# create a prefix array to store the cumulative sums of candies
prefix = [0] * (N+1)
for i in range(1, N+1):
    prefix[i] = prefix[i-1] + A[i-1]

# create a dictionary to store the count of remainder
remainder = {}
for i in range(N+1):
    mod = prefix[i] % M
    remainder[mod] = remainder.get(mod, 0) + 1

# calculate the number of pairs
pairs = 0
for count in remainder.values():
    pairs += count * (count - 1) // 2

# print the result
print(pairs)
"""