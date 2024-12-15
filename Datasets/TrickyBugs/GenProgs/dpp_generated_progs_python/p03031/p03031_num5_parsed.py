from itertools import product

N, M = map(int, input().split())
switches = [[] for _ in range(M)]
on_off_states = product(range(2), repeat=N)
count = 0

for i in range(M):
    k, *s = map(int, input().split())
    switches[i] = s

p = list(map(int, input().split()))

for states in on_off_states:
    valid = True
    for bulb, switch in enumerate(switches):
        num_on = sum(states[s-1] for s in switch)
        if num_on % 2 != p[bulb]:
            valid = False
            break
    if valid:
        count += 1

print(count)