def find_game_winner(S_A, S_B, S_C):
    A, B, C = list(S_A), list(S_B), list(S_C)
    Q = [A, B, C]
    i = ["a", "b", "c"]
    k = A[0]
    while True:
        j = i.index(k)
        if len(Q[j]) == 0:
            return k.upper()
        k = Q[j][0]
        Q[j] = Q[j][1:]

S_A = input()
S_B = input()
S_C = input()
print(find_game_winner(S_A, S_B, S_C))
