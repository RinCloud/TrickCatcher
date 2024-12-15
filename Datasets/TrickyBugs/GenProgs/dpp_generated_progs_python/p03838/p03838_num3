# PROGRAM:

def min_button_presses(x, y):
    # Calculate the absolute difference between x and y
    diff = abs(x - y)

    # Check if the difference is even
    # If it is not even, at least one press of button A is needed
    if diff % 2 != 0:
        return 1
    
    # If the difference is even, calculate the minimum number of button presses needed
    # button A can be pressed diff // 2 times to make the difference zero
    # and then button B can be pressed once to reverse the sign
    return diff // 2 + 1

# Read x and y from input
x, y = map(int, input().split())

# Calculate the minimum number of button presses
min_presses = min_button_presses(x, y)

# Print the result
print(min_presses)