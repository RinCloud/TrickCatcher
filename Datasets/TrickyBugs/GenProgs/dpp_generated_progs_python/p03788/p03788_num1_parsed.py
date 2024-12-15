# Code:
N, K = map(int, input().split())
S = input()

state = list(S)

for _ in range(K):
    if state[0] == 'A':
        state[0] = 'B'
    else:
        state[0] = 'A'
    
    for i in range(1, N):
        if state[i-1] == 'A':
            state[i] = 'B'
        else:
            state[i] = 'A'

print(''.join(state))