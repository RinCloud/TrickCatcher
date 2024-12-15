def determine_game_outcome(A, B):
    if A == B:
        return "Draw"
    elif (A == 1 and B != 1) or (A != 1 and B != 1 and A > B) or (A == 1 and B == 13):
        return "Alice"
    else:
        return "Bob"

A, B = map(int, input().split())
print(determine_game_outcome(A, B))
