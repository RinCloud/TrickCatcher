S = input()
mind = 0

for symbol in S:
    if symbol == '+':
        mind += 1
    else:
        mind -= 1

print(mind)