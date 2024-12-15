def calculate_candies(N, sequences):
    candies = 0
    while True:
        # Check if A and B are equal sequences
        equal_sequences = True
        for i in range(N):
            if sequences[i][0] != sequences[i][1]:
                equal_sequences = False
                break
        if equal_sequences:
            return candies
        
        # Find the maximum element in A and the minimum element in B
        max_a = 0
        min_b = float('inf')
        for i in range(N):
            max_a = max(max_a, sequences[i][0])
            min_b = min(min_b, sequences[i][1])
        
        # Decrease the maximum element in A and the minimum element in B by 1
        for i in range(N):
            if sequences[i][0] == max_a:
                sequences[i][0] -= 1
            if sequences[i][1] == min_b:
                sequences[i][1] -= 1
        
        # Give one candy to Takahashi
        candies += 1

# Read input
N = int(input())
sequences = []
for _ in range(N):
    A, B = map(int, input().split())
    sequences.append([A, B])

# Calculate the number of candies given to Takahashi
result = calculate_candies(N, sequences)

# Print the result
print(result)