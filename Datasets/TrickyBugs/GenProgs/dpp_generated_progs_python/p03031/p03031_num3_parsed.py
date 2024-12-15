from itertools import product

N, M = map(int, input().split())

switches = []
for _ in range(M):
    k, *s = map(int, input().split())
    switches.append(s)

p = list(map(int, input().split()))

combinations = list(product([0, 1], repeat=N))

count = 0
for combination in combinations:
    for i in range(M):
        lighted = sum(combination[s-1] for s in switches[i])
        if lighted % 2 != p[i]:
            break
    else:
        count += 1

print(count)