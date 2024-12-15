from collections import deque

# Read input
N, K = map(int, input().split())
V = list(map(int, input().split()))

# Initialize variables
result = 0

# Loop through all possible positions to split the deque
for i in range(min(N, K) + 1):
    for j in range(min(N, K) + 1):
        if i + j > min(N, K):
            continue
        
        # Create a copy of the deque
        D = deque(V)
        
        # Initialize variables for this split position
        jewels_in_hand = []
        jewels_sum = 0
        
        # Perform Operation A
        for _ in range(i):
            if len(D) > 0:
                jewel = D.popleft()
                jewels_in_hand.append(jewel)
                jewels_sum += jewel
        
        # Perform Operation B
        for _ in range(j):
            if len(D) > 0:
                jewel = D.pop()
                jewels_in_hand.append(jewel)
                jewels_sum += jewel
        
        # Perform Operation C and Operation D
        remaining_operations = K - (i + j)
        if remaining_operations > 0:
            sorted_jewels = sorted(jewels_in_hand)
            for k in range(min(len(sorted_jewels), remaining_operations)):
                if sorted_jewels[k] < 0:
                    jewels_sum -= sorted_jewels[k]
        
        # Update the maximum possible sum of jewels in hand
        result = max(result, jewels_sum)

# Print the maximum possible sum of jewels in hand
print(result)