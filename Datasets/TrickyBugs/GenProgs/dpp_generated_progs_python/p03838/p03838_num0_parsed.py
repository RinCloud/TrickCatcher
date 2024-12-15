x, y = map(int, input().split())

def count_buttons(x, y):
    count = 0
    while x != y:
        if x < y:
            if abs(x - y) % 2 == 0:
                count += 1
                x += 1
            else:
                count += 2
                x = -x + 1
        else:
            if abs(x - y) % 2 == 0:
                count += 1
                x -= 1
            else:
                count += 2
                x = -x - 1
    return count

print(count_buttons(x, y))