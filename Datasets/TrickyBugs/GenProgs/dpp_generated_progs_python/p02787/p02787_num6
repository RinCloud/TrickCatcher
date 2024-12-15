# I will start by reading the input values and storing them in appropriate variables:

H, N = map(int, input().split())

spells = []
for _ in range(N):
    A, B = map(int, input().split())
    spells.append((A, B))

# Next, I will create a list dp with length H+1 and initialize all values to infinity.
# dp[i] will represent the minimum total magic points required to reduce the monster's health to i.

dp = [float('inf')] * (H + 1)
dp[0] = 0

# Now, I will iterate through each spell and update the dp values accordingly.

for A, B in spells:
    for i in range(1, H + 1):
        if i >= A:
            dp[i] = min(dp[i], dp[i - A] + B)

# Finally, I will print the answer, which is the value at dp[H].

print(dp[H])