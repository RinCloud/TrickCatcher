# Program

s = input()
counter = {}
for direction in s:
    counter[direction] = counter.get(direction, 0) + 1

if counter.get('N', 0) == counter.get('S', 0) and counter.get('W', 0) == counter.get('E', 0):
    print('Yes')
else:
    print('No')