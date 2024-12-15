N, K = map(int, input().split())
S = input()

state = list(S)
for _ in range(K):
    # update the state of the devices
    next_state = [''] * N
    for i in range(N):
        if state[i] == 'A':
            if i > 0:
                next_state[i-1] += 'A'
            if i < N-1:
                next_state[i+1] += 'A'
        elif state[i] == 'B':
            if i > 0:
                next_state[i-1] += 'B'
            if i < N-1:
                next_state[i+1] += 'B'
    
    state = next_state

print(''.join(state))