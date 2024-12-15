x, y = map(int, input().split())

# Function to calculate the minimum number of button presses
def min_button_presses(x, y):
    count = 0
    while x != y:
        if abs(x) > abs(y):
            if x > 0:
                x -= 1
            else:
                x += 1
            count += 1
        elif abs(x) == abs(y):
            x = -x
            count += 1
        else:
            if x > 0:
                x += 1
            else:
                x -= 1
            count += 1
    return count

# Print the minimum number of times Snuke needs to press the buttons
print(min_button_presses(x, y))