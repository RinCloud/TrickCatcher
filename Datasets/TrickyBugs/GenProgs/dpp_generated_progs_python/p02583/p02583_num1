# Reading input
N = int(input())
L = list(map(int, input().split()))

# Sorting the lengths of sticks
L.sort()

# Initializing the count variable
count = 0

# Looping through each possible combination of sticks
for i in range(N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):
            # Checking if the lengths satisfy the conditions for forming a triangle
            if L[i] != L[j] and L[j] != L[k] and L[i] + L[j] > L[k]:
                count += 1

# Printing the count
print(count)