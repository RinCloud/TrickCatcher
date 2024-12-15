# Taking input
N = int(input())

# Creating a list to store the scores of each question
scores = []

# Taking input for scores and adding them to the 'scores' list
for _ in range(N):
    score = int(input())
    scores.append(score)

# Sorting the scores in descending order
scores.sort(reverse=True)

# Calculating the total grade if all answers are correct
total_grade = sum(scores)

# Checking if the total grade is a multiple of 10
if total_grade % 10 == 0:
    # Finding the first nonzero score
    for score in scores:
        if score % 10 != 0:
            # Subtracting the first nonzero score from the total grade
            total_grade -= score
            break

# Printing the maximum value that can be displayed as the grade
print(total_grade)