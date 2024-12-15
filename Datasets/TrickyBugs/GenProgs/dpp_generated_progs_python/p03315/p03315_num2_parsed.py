S = input()
count = 0
for symbol in S:
    if symbol == '+':
        count += 1
    else:
        count -= 1

print(count)