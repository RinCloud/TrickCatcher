# Reading input values
num_questions = int(input())
scores = []
for _ in range(num_questions):
    scores.append(int(input()))

# Sorting the scores in descending order
scores.sort(reverse=True)

# Finding the maximum possible grade
max_grade = sum(scores)
if max_grade % 10 == 0:
    # If the maximum grade is a multiple of 10, subtract the smallest non-zero score
    for score in scores:
        if score % 10 != 0:
            max_grade -= score
            break

# Printing the maximum grade
print(max_grade)