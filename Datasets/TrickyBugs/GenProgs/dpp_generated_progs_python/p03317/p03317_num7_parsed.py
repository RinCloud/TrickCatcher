# Solution

# Reading the input
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Sorting the array in ascending order
a.sort()

# Initializing the answer as 0
ans = 0

# Looping through the array
for i in range(0, n, k):
    # If length of current group is less than k
    if i + k > n:
        # Increase the answer by 1 and break the loop
        ans += 1
        break
    # Otherwise, increase the answer by 1
    ans += 1

# Printing the answer
print(ans)