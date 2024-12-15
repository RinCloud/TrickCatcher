"""
# Parse input
N = int(input())
scores = []
for _ in range(N):
    scores.append(int(input()))

# Sort the scores in descending order
scores.sort(reverse=True)

# Calculate the sum of scores
total_score = sum(scores)

# If the total_score is a multiple of 10
if total_score % 10 == 0:
    # Find the maximum score that is not a multiple of 10
    for score in scores:
        if score % 10 != 0:
            total_score -= score
            break

# Print the maximum value that can be displayed as your grade
print(total_score)
"""