from itertools import product

N, M = map(int, input().split())
switches = []
bulbs = []
for _ in range(M):
    k, *s = map(int, input().split())
    switches.append(s)
p = list(map(int, input().split()))

combinations = list(product([0, 1], repeat=N))
count = 0
for comb in combinations:
    lights = []
    for i in range(M):
        switch_status = sum(comb[switch-1] for switch in switches[i])%2
        if switch_status == p[i]:
            lights.append(1)
        else:
            lights.append(0)
    if all(lights):
        count += 1

print(count)