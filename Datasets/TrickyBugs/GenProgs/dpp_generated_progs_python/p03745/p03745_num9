# Program

n = int(input())
a = list(map(int, input().split()))

subarray_count = 1

for i in range(1, n):
    if a[i] > a[i-1]:
        continue
    elif a[i] < a[i-1]:
        subarray_count += 1

print(subarray_count)