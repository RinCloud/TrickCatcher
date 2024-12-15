S = input()
x = 0
y = 0
for direction in S:
    if direction == 'N':
        y += 1
    elif direction == 'S':
        y -= 1
    elif direction == 'W':
        x -= 1
    elif direction == 'E':
        x += 1
        
if x == 0 and y == 0:
    print("Yes")
else:
    print("No")