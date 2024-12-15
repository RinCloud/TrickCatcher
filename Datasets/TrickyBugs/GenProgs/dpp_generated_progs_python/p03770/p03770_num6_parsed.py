from collections import defaultdict

def solve(N, X, Y, balls):
    mod = 10**9 + 7
    
    # Create a dictionary to store the count of each color
    color_count = defaultdict(int)
    for i in range(N):
        color_count[balls[i][0]] += 1
    
    # Store the sum of the weight of balls with the same color
    color_weight = defaultdict(int)
    for i in range(N):
        color_weight[balls[i][0]] += balls[i][1]
    
    # Create a list to store the count of each sequence length
    sequence_count = [0] * (N+1)
    
    # Initialize the count of length 1 sequence (all balls with different colors)
    sequence_count[1] = N
    
    for i in range(2, N+1):
        # Calculate the count of sequences of length i
        for j in range(1, i):
            # Count of sequences of length i is the sum of:
            # 1. Count of sequences of length j where one ball with color k is inserted at the end
            # 2. Count of sequences of length j-1 where two balls with color k are inserted in between
            sequence_count[i] += sequence_count[j] * color_count[k] * (color_count[k] - 1) // 2
            sequence_count[i] += sequence_count[j-1] * color_count[k] * (color_count[k] - 1) // 2
            
        sequence_count[i] %= mod
    
    # Calculate the total count of different sequences
    total_count = 0
    for i in range(N+1):
        total_count = (total_count + sequence_count[i]) % mod
    
    return total_count

# Read input
N, X, Y = map(int, input().split())
balls = []
for _ in range(N):
    c, w = map(int, input().split())
    balls.append((c, w))

# Solve the problem
answer = solve(N, X, Y, balls)

# Print the answer
print(answer)