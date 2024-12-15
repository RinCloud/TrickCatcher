# Get the number of questions
n = int(input())

# Initialize variables
score = 0
multiple_of_10 = False

# Iterate over each question
for _ in range(n):
    # Get the score of each question
    s = int(input())
    score += s

    # Check if the score is a multiple of 10
    if score % 10 == 0:
        multiple_of_10 = True

# If the score is a multiple of 10, set it to 0
if multiple_of_10:
    score = 0

# Print the maximum possible grade
print(score)