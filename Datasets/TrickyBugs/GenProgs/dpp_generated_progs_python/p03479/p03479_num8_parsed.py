X, Y = map(int, input().split())

max_length = 0

for i in range(X, Y+1):
    length = 1
    current = i
    while current * 2 <= Y:
        current *= 2
        length += 1
    max_length = max(max_length, length)

print(max_length)