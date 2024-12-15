n, k = map(int, input().split())
heights = list(map(int, input().split()))

count = 0
for height in heights:
    if height >= k:
        count += 1

print(count)