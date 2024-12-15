def can_win(H, N, moves):
    if sum(moves) >= H:
        return "No"
    dp = [float('inf')] * (H+1)
    dp[0] = 0
    for i in range(1, H+1):
        for move in moves:
            if i - move >= 0:
                dp[i] = min(dp[i], dp[i - move] + 1)
    if dp[H] <= N:
        return "Yes"
    else:
        return "No"


H, N = map(int, input().split())
moves = list(map(int, input().split()))

print(can_win(H, N, moves))