x, y = map(int, input().split())

def num_presses(x: int, y: int) -> int:
    count = 0
    if x > y:
        count += abs(x - y)
        x = y
    while x != y:
        if x < y:
            x += 1
            count += 1
        else:
            x = -x
            count += 1
    return count

print(num_presses(x, y))