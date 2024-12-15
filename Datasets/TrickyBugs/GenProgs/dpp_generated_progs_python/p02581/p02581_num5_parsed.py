# Here is the python code to achieve the given program intention:

N = int(input())
cards = list(map(int, input().split()))

freq = [0] * (N+1)
for card in cards:
    freq[card] += 1

dp = [[0] * (N+1) for _ in range(N+1)]
dp[0][0] = freq[1] + freq[2] + freq[3]

for i in range(N+1):
    for j in range(N+1):
        k = dp[i][j]
        if i < N:
            dp[i+1][j] = max(dp[i+1][j], k + freq[i+4])
        if j < N:
            dp[i][j+1] = max(dp[i][j+1], k + freq[j+4])
        if i+j < N:
            dp[i][j] = max(dp[i][j], k + freq[i+j+4])

result = 0
for i in range(N+1):
    for j in range(N+1):
        if i+j <= N and (N-i-j) % 2 == 0:
            result = max(result, dp[i][j])

print(result)