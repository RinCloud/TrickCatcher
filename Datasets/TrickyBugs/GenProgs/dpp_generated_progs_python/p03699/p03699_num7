# Taking input
N = int(input())
scores = []
for _ in range(N):
    scores.append(int(input()))

# Calculating the total score
total_score = sum(scores)

# Checking if the total score is a multiple of 10
if total_score % 10 == 0:
    # Subtracting the smallest non-zero score from the total score
    for score in sorted(scores):
        if score % 10 != 0:
            total_score -= score
            break

print(total_score)