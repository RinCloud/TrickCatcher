x, y = map(int, input().split())

def min_button_press(x, y):
    count = 0
    
    if x < y:
        while x < y:
            if abs(x - y) == 1:
                count += 1
                break
            if y % 2 == 0:
                y //= 2
                count += 1
            else:
                y += 1
                count += 1

    else:
        while x > y:
            if abs(x - y) == 1:
                count += 1
                break
            if y % 2 == 0:
                y //= 2
                count += 1
            else:
                y += 1
                count += 1
    
    return count
    
print(min_button_press(x, y))