N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input()

score = 0

for i in range(N):
    if i < K or (T[i] == 'r' and i >= K and T[i-K] != 'r') or (T[i] == 's' and i >= K and T[i-K] != 's') or (T[i] == 'p' and i >= K and T[i-K] != 'p'):
        if T[i] == 'r':
            score += P
        elif T[i] == 's':
            score += R
        elif T[i] == 'p':
            score += S

print(score)