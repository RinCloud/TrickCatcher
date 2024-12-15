from itertools import product

def count_combinations(N, M, switches, bulbs, p):
    # Generate all possible combinations of switch states
    switch_states = list(product([0, 1], repeat=N))
    
    # Initialize a counter for the number of combinations that light all bulbs
    count = 0
    
    # Check each switch state combination
    for state in switch_states:
        # Check if the current state of the switches satisfies all the bulbs
        bulbs_lit = True
        for i in range(M):
            switches_lit = sum(state[j-1] for j in bulbs[i][1:]) % 2
            if switches_lit != p[i]:
                bulbs_lit = False
                break
        
        # If all bulbs are lit, increment the counter
        if bulbs_lit:
            count += 1
    
    return count


# Read input
N, M = map(int, input().split())

switches = []
for _ in range(M):
    k, *s = map(int, input().split())
    switches.append(s)

p = list(map(int, input().split()))

# Calculate and print the number of combinations of switch states
result = count_combinations(N, M, switches, p)
print(result)