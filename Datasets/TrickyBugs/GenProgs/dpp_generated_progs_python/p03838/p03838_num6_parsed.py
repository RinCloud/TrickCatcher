x, y = map(int, input().split())

def find_min_press(x, y):
    count = 0
    while x != y:
        if abs(x - y) < y:
            y -= abs(x - y)
            count += abs(x - y)
        elif x < y:
            y -= x
            count += x
        else:
            if x == 0:
                x += 1
                count += 1
            else:
                x = -x
                count += 1
    return count

result = find_min_press(x, y)
print(result)