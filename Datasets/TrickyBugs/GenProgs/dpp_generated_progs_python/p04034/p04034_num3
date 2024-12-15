# Read input
N, M = map(int, input().split())

# Initialize red ball count
red_count = 1

# Initialize boxes with white balls
boxes = [1] * N

# Iterate over operations
for _ in range(M):
    x, y = map(int, input().split())
    
    # If current box contains red ball, decrement red_count
    if boxes[x-1] == 1:
        red_count -= 1
    
    # Move ball from box x to box y
    boxes[x-1] -= 1
    boxes[y-1] += 1
    
    # If destination box is box 1, increment red_count
    if y == 1:
        red_count += 1
        
# Print the number of boxes that may contain the red ball after all operations
print(red_count)