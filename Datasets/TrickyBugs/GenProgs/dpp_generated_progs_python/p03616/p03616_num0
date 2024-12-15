X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

# Calculate the difference in the amount of sand in bulb A and bulb B after each flip
difference = [r[0]]
for i in range(1, K):
    difference.append(r[i] - r[i-1])

# Calculate the total amount of sand in bulb B at each flip
total_sand_B = [X-difference[0]]
for i in range(1, K):
    total_sand_B.append(total_sand_B[i-1] - difference[i])

# Loop through each query
for _ in range(Q):
    t, a = map(int, input().split())
    
    # Check if the query falls before the first flip
    if t < r[0]:
        print(a)
        continue
    
    # Find the index of the flip that the query falls within
    index = 0
    while index < K-1 and r[index] <= t:
        index += 1
    
    # Calculate the amount of sand in bulb A at the query time
    amount_sand_A = X - total_sand_B[index]
    
    # Calculate the amount of sand in bulb A after flipping
    if (index+1) % 2 == 0:
        amount_sand_A -= (t - r[index])
    else:
        amount_sand_A += (t - r[index])
    
    print(amount_sand_A)