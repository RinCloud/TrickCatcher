# Takahashi

# read input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# use a dictionary to count occurrences of each integer
count = {}
for a in A:
    count[a] = count.get(a, 0) + 1

# sort the counts to obtain the largest K counts
sorted_counts = sorted(count.values(), reverse=True)[:K]

# calculate the number of balls that need to be rewritten
balls_to_rewrite = N - sum(sorted_counts)

# print the result
print(balls_to_rewrite)