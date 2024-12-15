import sys

def can_raccoon_win(H, N, moves):
    total_damage = sum(moves)
    if total_damage >= H:
        return "No"
    dp = [False] * (H + 1)
    dp[0] = True
    for move in moves:
        for i in range(H - move, -1, -1):
            if dp[i]:
                dp[i + move] = True
    if dp[H]:
        return "Yes"
    return "No"

input_data = sys.stdin.readlines()
H, N = map(int, input_data[0].split())
moves = list(map(int, input_data[1].split()))
print(can_raccoon_win(H, N, moves))