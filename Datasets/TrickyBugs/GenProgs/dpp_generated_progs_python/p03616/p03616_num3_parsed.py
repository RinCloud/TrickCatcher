X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

# Initialize the starting upper and lower bulbs
upper_bulb = 'A'
lower_bulb = 'B'
sand_A = X

# Find the configuration at each flip time
config = []
for i in range(K):
    if i % 2 == 0:
        config.append([r[i], upper_bulb, lower_bulb])
    else:
        config.append([r[i], lower_bulb, upper_bulb])

# Process each query
for _ in range(Q):
    t, a = map(int, input().split())
    
    # Find the current configuration at time t
    curr_config = upper_bulb
    for r_time, upper, lower in config:
        if t < r_time:
            break
        curr_config = upper if curr_config == lower else lower
    
    # Calculate the amount of sand in bulb A at time t
    if curr_config == 'A':
        sand_A = a + min(t, r[0]) - 1
    else:
        sand_A = X - a - max(0, t - r[-1])
    
    # Print the result
    print(sand_A)