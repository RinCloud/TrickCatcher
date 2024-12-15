'''
The problem is a variation of the knapsack problem where we need to minimize the total cost while achieving a certain target.
Here, the target is to decrease the monster's health to 0 or below.

We can solve this problem using dynamic programming.

Let's define dp[i][h] as the minimum total magic points required to decrease the monster's health to h using only the first i spells.

The base case is dp[0][0] = 0 (no spells used, monster already at 0 health).

For each spell i, we have two choices:
1. Do not use the spell: dp[i][h] = dp[i-1][h]
2. Use the spell: dp[i][h] = dp[i][h-A[i]] + B[i]

We need to choose the minimum cost out of the above two choices.

The final answer will be dp[N][H], where N is the total number of spells.

Pseudocode:
- Read input values H and N
- Initialize dp array with infinity values (except for dp[0][0] = 0)
- Iterate from i = 1 to N:
    - Read values Ai and Bi for spell i
    - Initialize dp[i][0] = 0
    - Iterate from h = 1 to H:
        - dp[i][h] = dp[i-1][h]
        - if h >= Ai:
            - dp[i][h] = min(dp[i][h], dp[i][h-Ai] + Bi)
- print dp[N][H]

Time complexity analysis: 
The outer loop runs N times and the inner loop runs H times, so the overall time complexity is O(N * H).

Let's implement the code now.
'''

import sys

# Read input values
H, N = map(int, sys.stdin.readline().split())

# Initialize dp array
dp = [[float('inf')] * (H + 1) for _ in range(N + 1)]
dp[0][0] = 0

# Iterate over spells
for i in range(1, N + 1):
    A, B = map(int, sys.stdin.readline().split())
    dp[i][0] = 0
    for h in range(1, H + 1):
        dp[i][h] = dp[i - 1][h]
        if h >= A:
            dp[i][h] = min(dp[i][h], dp[i][h - A] + B)

# Print the minimum total magic points required
print(dp[N][H])