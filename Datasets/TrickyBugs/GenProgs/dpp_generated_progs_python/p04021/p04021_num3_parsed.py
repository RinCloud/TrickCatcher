# Taking input
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))
    
# Creating a copy of the original sequence
arr_copy = arr.copy()

# Sorting the copy of the sequence
arr_copy.sort()

# Counting the minimum number of Operation 1
count = 0
for i in range(n):
    if arr[i] != arr_copy[i]:
        count += 1

# Printing the result
print(count)