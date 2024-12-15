# Getting inputs
N = int(input())
a = list(map(int, input().split()))

# Counting frequency of each element in the sequence
frequency = {}
for i in range(N):
    if a[i] in frequency:
        frequency[a[i]] += 1
    else:
        frequency[a[i]] = 1

# Finding the element with maximum frequency
max_frequency = max(frequency.values())

# Printing the maximum frequency
print(max_frequency)