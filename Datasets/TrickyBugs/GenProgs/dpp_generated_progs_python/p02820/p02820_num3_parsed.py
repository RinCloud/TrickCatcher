N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input()

score = 0
for i in range(N):
    if i >= K and T[i] == T[i-K]:
        continue
    if T[i] == 'r':
        score += P
    elif T[i] == 's':
        score += R
    else:
        score += S

print(score)