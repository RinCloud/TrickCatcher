# Taking input
N = int(input())
scores = []
for _ in range(N):
    scores.append(int(input()))
    
# Sorting the scores in descending order
scores.sort(reverse=True)

# Finding the sum of scores except the last one
total = sum(scores[:-1])

# Checking if the total is divisible by 10
if total % 10 == 0:
    print(0)
else:
    print(total)