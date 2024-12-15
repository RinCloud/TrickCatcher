def ride_roller_coaster(N, K, heights):
    count = 0
    for height in heights:
        if height >= K:
            count += 1
    return count

N, K = map(int, input().split())
heights = list(map(int, input().split()))

result = ride_roller_coaster(N, K, heights)
print(result)