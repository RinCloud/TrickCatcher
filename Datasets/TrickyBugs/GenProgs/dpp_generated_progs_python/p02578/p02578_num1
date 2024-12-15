N = int(input())
heights = list(map(int, input().split()))

stool_heights = [0] * N
min_height = heights[0] + 0
for i in range(1, N):
    stool_heights[i] = max(0, min_height - heights[i])
    min_height = max(min_height, heights[i] + stool_heights[i])

total_height = sum(stool_heights)
print(total_height)