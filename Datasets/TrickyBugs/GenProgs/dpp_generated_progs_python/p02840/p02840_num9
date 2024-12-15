N, X, D = map(int, input().split())

# Case when D = 0
if D == 0:
    if X == 0:
        print(1)
    else:
        print(N + 1)
    exit()

# Case when D < 0
if D < 0:
    X = -X
    D = -D

# Find the first term which causes a cycle
cycle_start = X % D

cycle = [cycle_start]
while True:
    next_term = cycle[-1] + D
    if next_term % D == cycle_start:
        break
    cycle.append(next_term)

# Find the number of complete cycles
complete_cycles = (N - 1) // len(cycle)

# Find the remaining terms after the complete cycles
remaining_terms = (N - 1) % len(cycle)

# Calculate the number of possible values of S - T
if complete_cycles > 0:
    sum_cycle = sum(cycle)
    num_possible_values = (complete_cycles * sum_cycle) + remaining_terms
else:
    num_possible_values = remaining_terms + 1

print(num_possible_values)