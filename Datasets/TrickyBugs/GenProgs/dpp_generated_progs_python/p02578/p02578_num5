n = int(input())
a = list(map(int, input().split()))

stool_heights = [0] * n
total_height = 0

for i in range(n-1, -1, -1):
    if i == n-1:
        stool_heights[i] = a[i]
        total_height += stool_heights[i]
    else:
        stool_heights[i] = max(stool_heights[i+1]+1, a[i])
        total_height += stool_heights[i] - a[i]

print(total_height)