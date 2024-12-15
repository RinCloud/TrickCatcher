'''
We can solve this problem using dynamic programming.

Let dp[i] represent the minimum total Magic Points required to reduce the monster's health to i.
Initialize dp[0] = 0 and dp[i] = infinity for i > 0.

For each spell, for each i from 0 to H-A_i, update dp[i+A_i] = min(dp[i+A_i], dp[i]+B_i).

Finally, the minimum total Magic Points required to win the fight will be dp[H].

'''

H, N = map(int, input().split())

dp = [float('inf')] * (H + 1)
dp[0] = 0

for _ in range(N):
    A, B = map(int, input().split())
    for i in range(H - A + 1):
        dp[i + A] = min(dp[i + A], dp[i] + B)

print(dp[H])