# getting the input
N = int(input())
L = list(map(int, input().split()))

# sorting the list of lengths in ascending order
L.sort()

count = 0

# iterating over the list and checking for each possible combination of 3 sticks
for i in range(N-2):
    for j in range(i+1, N-1):
        for k in range(j+1, N):
            if (L[i] != L[j] and L[i] != L[k] and L[j] != L[k]) and (L[i] + L[j] > L[k]):
                count += 1

# printing the count of valid triangles
print(count)