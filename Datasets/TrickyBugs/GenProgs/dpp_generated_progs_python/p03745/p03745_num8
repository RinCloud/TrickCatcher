n = int(input())
arr = list(map(int, input().split()))

count = 1
up = False
down = False

for i in range(1, n):
    if arr[i] > arr[i-1]:
        up = True
        if down:
            count += 1
            down = False
    elif arr[i] < arr[i-1]:
        down = True
        if up:
            count += 1
            up = False

print(count)