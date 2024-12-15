x = int(input())

# Dictionary to store the values for each side of the die
die = {
    1: 6,
    2: 5,
    3: 4,
    4: 3,
    5: 2,
    6: 1
}

# Initialize variables for counting operations and total score
operations = 0
score = 0

# Check if x is already achieved. If not, calculate the minimum number of operations required
while score < x:
    # Find the side of the die that maximizes the score when facing upward
    max_score = max(die.keys(), key=lambda i: die[i])
    
    # Add the score of the side facing upward
    score += die[max_score]
    
    # Increment the number of operations performed
    operations += 1
    
    # Update the values for each side of the die based on the rotation performed
    die[max_score], die[7 - max_score] = die[7 - max_score], die[max_score]

# Print the minimum number of operations required
print(operations)