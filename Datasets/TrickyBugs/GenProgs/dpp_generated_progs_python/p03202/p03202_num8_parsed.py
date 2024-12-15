# Getting the input values
N = int(input())
A = list(map(int, input().split()))

# Counting the unique characters
unique_chars = set()
for length in A:
    unique_chars.add(length)

# Printing the result
print(len(unique_chars))