x = int(input())

# Initialize the minimum number of operations to infinity
min_operations = float('inf')

# Iterate through all possible numbers that can be obtained by rotating the die
for i in range(1, 7):
    score = 0
    # Keep rotating the die and accumulating the score until it becomes greater than or equal to x
    while score < x:
        score += i
        # Rotate the die 90° clockwise
        i = 7 - i
    # Update the minimum number of operations if the current number of operations is less than the minimum
    min_operations = min(min_operations, score // i)
    
print(min_operations)