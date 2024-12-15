X, Y = map(int, input().split())

count = 0
while X <= Y:
    X *= 2
    count += 1

print(count)