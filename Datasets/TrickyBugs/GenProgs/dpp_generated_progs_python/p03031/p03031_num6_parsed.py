import itertools

def count_switch_combinations(N, M, bulbs, p):
    num_combinations = 0
    for switches in itertools.product([0, 1], repeat=N):
        all_bulbs_lit = True
        for i in range(M):
            sum_switches = sum(switches[j-1] for j in bulbs[i])
            if sum_switches % 2 != p[i]:
                all_bulbs_lit = False
                break
        if all_bulbs_lit:
            num_combinations += 1
    return num_combinations

# Read input
N, M = map(int, input().split())
bulbs = []
for _ in range(M):
    k, *switches = map(int, input().split())
    bulbs.append(switches)
p = list(map(int, input().split()))

# Calculate the number of combinations
result = count_switch_combinations(N, M, bulbs, p)

# Print the result
print(result)