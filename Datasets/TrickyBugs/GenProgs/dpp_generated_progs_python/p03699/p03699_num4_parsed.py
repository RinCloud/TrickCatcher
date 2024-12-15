# Taking input from the user
N = int(input())

# Initializing a list to store the scores of each question
scores = []

# Loop to take input for each question
for _ in range(N):
    score = int(input())
    scores.append(score)

# Sorting the scores in descending order
scores.sort(reverse=True)

# Calculating the sum of scores
total_score = sum(scores)

# Checking if the total score is a multiple of 10
if total_score % 10 == 0:
    # Removing the smallest score that is not divisible by 10
    for score in scores:
        if score % 10 != 0:
            total_score -= score
            break

# Printing the final score
print(total_score)