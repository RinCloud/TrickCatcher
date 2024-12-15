# Function to count the number of combinations to light all bulbs
def count_combinations(N, M, switches, bulbs, p):
    count = 0
    
    # Generate all possible combinations of "on" and "off" states for switches
    for i in range(2**N):
        switches_state = [0] * N
        
        # Assign states to each switch
        for j in range(N):
            # Check if j-th switch is "on" or "off" based on the binary representation of i
            if (i >> j) & 1:
                switches_state[j] = 1
        
        bulbs_lit = True
        
        # Check if all bulbs are lighted for current combination of states
        for k in range(M):
            switches_on = 0
            for switch in bulbs[k]:
                switches_on += switches_state[switch - 1]
                
            # Check if the number of switches that are "on" among these switches 
            # is congruent to p[k] modulo 2
            if switches_on % 2 != p[k]:
                bulbs_lit = False
                break
        
        # If all bulbs are lighted, increment the count
        if bulbs_lit:
            count += 1
    
    return count


# Read input values
N, M = map(int, input().split())
switches = []
bulbs = []
p = []

# Read the switches and bulbs information
for _ in range(M):
    k, *s = map(int, input().split())
    switches.append(s)
    
# Read the values of p
p = list(map(int, input().split()))

# Call the function to count the number of combinations
combinations = count_combinations(N, M, switches, bulbs, p)

# Print the number of combinations
print(combinations)