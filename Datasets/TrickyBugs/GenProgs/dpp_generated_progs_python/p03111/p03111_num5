# Given N bamboos and their lengths
N, A, B, C = map(int, input().split())
lengths = [int(input()) for _ in range(N)]

# Initialize the minimum MP needed to infinity
min_mp = float('inf')

# Loop through all possible configurations of selecting 3 bamboos
for i in range(2**N):
    # Initialize variables to keep track of selected bamboos and their lengths
    selected_bamboos = []
    selected_lengths = []
    
    # Loop through each bamboo
    for j in range(N):
        # If the j-th bamboo is selected in the current configuration
        if (i >> j) & 1:
            selected_bamboos.append(j)
            selected_lengths.append(lengths[j])
    
    # Skip the current configuration if not enough bamboos are selected
    if len(selected_bamboos) < 3:
        continue
    
    # Loop through all possible lengths of the third bamboo
    for k in range(1, C):
        # Calculate the lengths of the first two bamboos
        a_length = A - k
        b_length = B - k
        
        # Skip if the first two bamboos are not long enough
        if a_length < 1 or b_length < 1:
            continue
        
        # Compute the MP needed to achieve the objective
        mp = sum(selected_lengths) - a_length - b_length + C
        
        # Update the minimum MP needed
        min_mp = min(min_mp, mp)

# Print the minimum MP needed
print(min_mp)