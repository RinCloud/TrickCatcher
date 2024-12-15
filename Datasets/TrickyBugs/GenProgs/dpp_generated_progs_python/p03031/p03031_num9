from itertools import product

def count_combinations(N, M, bulbs, switches, p):
    count = 0
    for state in product([0, 1], repeat=N):
        valid = True
        for i in range(M):
            sum_switches = sum(state[switches[i][j]-1] for j in range(bulbs[i]))
            if sum_switches % 2 != p[i]:
                valid = False
                break
        if valid:
            count += 1
    return count

N, M = map(int, input().split())
bulbs = []
switches = []
p = []
for _ in range(M):
    k, *s = map(int, input().split())
    bulbs.append(k)
    switches.append(s)
p = list(map(int, input().split()))

result = count_combinations(N, M, bulbs, switches, p)
print(result)