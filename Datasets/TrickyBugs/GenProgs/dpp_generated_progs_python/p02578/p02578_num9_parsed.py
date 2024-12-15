n = int(input())
heights = list(map(int, input().split()))

stools = [0] * n

for i in range(1, n):
    if heights[i] > heights[i - 1]:
        stools[i] = stools[i - 1] + heights[i] - heights[i - 1]

print(sum(stools))