from collections import defaultdict
from itertools import combinations

N, X, Y = map(int, input().split())

balls = []
for _ in range(N):
    c, w = map(int, input().split())
    balls.append((c, w))

# Sort the balls according to their weights in descending order
balls.sort(key=lambda x: -x[1])

# Create a dictionary to store the frequencies of each color
color_freq = defaultdict(int)
for c, _ in balls:
    color_freq[c] += 1

# Calculate the factorial modulo 10^9 + 7 for each frequency
factorials = [1]
for i in range(1, N + 1):
    factorials.append((factorials[-1] * i) % (10**9 + 7))

# Initialize the count of different sequences to 1
count = 1

# Check each pair of colors and their weights
for (c1, w1), (c2, w2) in combinations(balls, 2):
    # If the two balls have the same color
    if c1 == c2:
        # If the total weight is at most X, add the number of possible swaps to the count
        if w1 + w2 <= X:
            count = (count + factorials[color_freq[c1]] // (factorials[color_freq[c1] - 2] * 2)) % (10**9 + 7)
    else:
        # If the total weight is at most Y, add the number of possible swaps to the count
        if w1 + w2 <= Y:
            count = (count + factorials[color_freq[c1]] * factorials[color_freq[c2]]) % (10**9 + 7)

print(count)