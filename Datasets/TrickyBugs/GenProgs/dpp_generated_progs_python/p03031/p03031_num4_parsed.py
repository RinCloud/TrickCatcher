N, M = map(int, input().split())

switches = []
for _ in range(M):
    switches.append(list(map(int, input().split())))

p = list(map(int, input().split()))

comb = 0
for i in range(2 ** N):
    switch_states = [(i >> j) & 1 for j in range(N)]
    bulbs_lit = True
    for j in range(M):
        count_on = sum(switch_states[switches[j][k]-1] for k in range(switches[j][0]))
        if count_on % 2 != p[j]:
            bulbs_lit = False
            break
    if bulbs_lit:
        comb += 1

print(comb)