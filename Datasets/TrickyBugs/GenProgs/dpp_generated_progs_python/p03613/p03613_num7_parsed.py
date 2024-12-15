# Reading input values
N = int(input())
a = list(map(int, input().split()))

# Counting occurences of each number
counter = {}
for i in a:
    if i not in counter:
        counter[i] = 0
    counter[i] += 1

# Finding the maximum count
max_count = max(counter.values())

# Printing the maximum count
print(max_count)