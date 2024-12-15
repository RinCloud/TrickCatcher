# Calculating minimum number of button presses to change the value displayed on the calculator

# Function to calculate minimum number of button presses
def minimum_button_presses(x, y):
    # If the signs of x and y are different,
    # Snuke only needs to press button B once to invert the sign
    if x * y < 0:
        return 1
    # If the difference between x and y is even,
    # Snuke can reach y by pressing button A multiple times
    if abs(x - y) % 2 == 0:
        return abs(x - y) // 2
    # If the difference between x and y is odd,
    # Snuke needs to press button A once and then
    # do the same operations as if the difference is even
    else:
        return (abs(x - y) + 1) // 2

# Reading input values
x, y = map(int, input().split())

# Calculating minimum number of button presses
result = minimum_button_presses(x, y)

# Printing the result
print(result)