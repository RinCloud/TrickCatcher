# Taking input from standard input
n = int(input())
scores = []
for _ in range(n):
    scores.append(int(input()))

# Sorting scores in descending order
scores.sort(reverse=True)

# Finding the sum of scores
total = sum(scores)

# Checking if total is a multiple of 10
if total % 10 == 0:
   # Subtracting the smallest non-zero score from total
   for score in scores:
       if score % 10 != 0:
           total -= score
           break

# Printing the maximum value that can be displayed as grade
print(total)