# Program:

def max_score(N, K, R, S, P, T):
    score = 0
    used = [''] * N
    
    for i in range(N):
        if i >= K and T[i] == used[i-K]:
            used[i] = ''
            continue
        
        if T[i] == 'r':
            score += P
            used[i] = 'p'
        elif T[i] == 's':
            score += R
            used[i] = 'r'
        elif T[i] == 'p':
            score += S
            used[i] = 's'

    return score

N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input().strip()

print(max_score(N, K, R, S, P, T))