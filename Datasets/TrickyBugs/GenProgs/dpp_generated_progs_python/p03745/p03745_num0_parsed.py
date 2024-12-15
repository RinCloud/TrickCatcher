# Program:

n = int(input())
arr = list(map(int, input().split()))

count = 1
prev = arr[0]

for i in range(1, n):
    if arr[i] > prev:
        while i < n and arr[i] >= prev:
            prev = arr[i]
            i += 1
        count += 1
    
    elif arr[i] < prev:
        while i < n and arr[i] <= prev:
            prev = arr[i]
            i += 1
        count += 1

print(count)