N, K = map(int, input().split())
S = input()

def change_state(state):
    if state == 'A':
        return 'B'
    else:
        return 'A'

def simulate(N, K, S):
    for _ in range(K):
        if S[0] == 'A':
            S = 'B' + S[:-1]
        else:
            S = S[1:] + 'A'
    return S

result = simulate(N, K, S)
print(result)