# Function to calculate the number of combinations
def count_combinations(N, M, switches, bulbs, p):
    count = 0
    
    # Iterate over all possible combinations of switch states
    for i in range(2**N):
        valid = True
        
        # Check if the current combination satisfies all the bulbs
        for j in range(M):
            total = 0
            for switch in bulbs[j]:
                # Check if the current switch is "on" in the current combination
                if (i >> (switch-1)) & 1:
                    total += 1
            
            # Check if the total count of "on" switches satisfies the congruence condition
            if (total % 2) != p[j]:
                valid = False
                break
        
        # If the current combination satisfies all the bulbs, increment the count
        if valid:
            count += 1
    
    return count

# Read the input values
N, M = map(int, input().split())
switches = []
bulbs = []
for _ in range(M):
    k, *s = map(int, input().split())
    switches.append(s)
for _ in range(M):
    p = int(input())
    bulbs.append(p)

# Call the count_combinations function and print the result
print(count_combinations(N, M, switches, bulbs, p))