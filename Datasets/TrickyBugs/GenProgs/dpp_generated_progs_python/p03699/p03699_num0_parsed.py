# Taking input
N = int(input())
scores = []
for _ in range(N):
    scores.append(int(input()))

# Sort the scores in descending order
scores.sort(reverse=True)

# Calculate the total score
total_score = sum(scores)

# If the total score is a multiple of 10, deduct the smallest score that is not a multiple of 10
if total_score % 10 == 0:
    for score in scores:
        if score % 10 != 0:
            total_score -= score
            break

print(total_score)