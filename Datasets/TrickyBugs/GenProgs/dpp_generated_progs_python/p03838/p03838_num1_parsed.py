x, y = map(int, input().split())

def calc_button_presses(x: int, y: int) -> int:
    count = 0
    if x < y:
        while x < y:
            if y % 2 == 0:
                y //= 2
                count += 1
            else:
                y += 1
                count += 1
    else:
        while x > y:
            if y % 2 == 0:
                y //= 2
                count += 1
            else:
                y -= 1
                count += 1
    press = abs(x - y) // 2
    count += press
    return count

print(calc_button_presses(x, y))