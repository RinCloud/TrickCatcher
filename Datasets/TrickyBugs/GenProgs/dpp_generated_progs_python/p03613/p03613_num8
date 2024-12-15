# Program:

N = int(input())
a = list(map(int, input().split()))

# Count the occurrences of each number in the list
count = {}
for i in range(N):
    if a[i] not in count:
        count[a[i]] = 1
    else:
        count[a[i]] += 1

# Find the maximum count
max_count = max(count.values())

print(max_count)