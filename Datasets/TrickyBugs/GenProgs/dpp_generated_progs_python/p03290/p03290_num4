import sys

D, G = map(int, sys.stdin.readline().split())

p = [0] * (D+1)
c = [0] * (D+1)

for i in range(1, D+1):
    p[i], c[i] = map(int, sys.stdin.readline().split())

ans = float('inf')

for i in range(2**D):
    solved = 0
    score = 0
    rest_max = -1

    for j in range(1, D+1):
        if (i >> (j-1)) & 1:
            solved += p[j]
            score += 100 * j * p[j] + c[j]
        else:
            rest_max = j

    if score < G:
        solve = min(p[rest_max], -(-(G-score)//(100*rest_max)))
        solved += solve
        score += (100*rest_max) * solve

    if score >= G:
        ans = min(ans, solved)

print(ans)