import sys

# Read input
N, M = map(int, sys.stdin.readline().split())
students = [tuple(map(int, sys.stdin.readline().split())) for _ in range(N)]
checkpoints = [tuple(map(int, sys.stdin.readline().split())) for _ in range(M)]

# Iterate over each student
for student in students:
    min_distance = float('inf')
    min_checkpoint = -1
    
    # Calculate Manhattan distance for each checkpoint
    for i, checkpoint in enumerate(checkpoints):
        distance = abs(student[0] - checkpoint[0]) + abs(student[1] - checkpoint[1])
        
        # Update nearest checkpoint and distance if current distance is smaller
        if distance < min_distance:
            min_distance = distance
            min_checkpoint = i+1
    
    # Print index of nearest checkpoint for current student
    print(min_checkpoint)