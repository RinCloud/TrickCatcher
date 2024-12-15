n, k = map(int, input().split())
logs = list(map(int, input().split()))

# binary search for the answer
left = 0
right = max(logs)

while left < right:
    mid = (left + right) // 2
    cuts = 0
    for log in logs:
        if log > mid:
            cuts += (log // mid)
            if log % mid == 0:
                cuts -= 1
    if cuts <= k:
        right = mid
    else:
        left = mid + 1

print(left)