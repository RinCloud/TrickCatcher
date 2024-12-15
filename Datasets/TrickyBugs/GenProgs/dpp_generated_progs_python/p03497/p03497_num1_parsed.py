# Reading the input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Counting the frequency of each integer
count = {}
for a in A:
    count[a] = count.get(a, 0) + 1

# Sorting the frequencies in descending order
frequencies = sorted(count.values(), reverse=True)

# Summing up the frequencies of the top K-1 integers
result = sum(frequencies[K-1:])

# Printing the result
print(result)