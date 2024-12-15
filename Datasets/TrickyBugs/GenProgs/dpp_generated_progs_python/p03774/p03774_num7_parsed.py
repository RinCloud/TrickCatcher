import sys

# Read input
N, M = map(int, sys.stdin.readline().split())

# Read coordinates of students
students = []
for _ in range(N):
    x, y = map(int, sys.stdin.readline().split())
    students.append((x, y))

# Read coordinates of checkpoints
checkpoints = []
for _ in range(M):
    x, y = map(int, sys.stdin.readline().split())
    checkpoints.append((x, y))

# Find nearest checkpoint for each student
for student in students:
    min_distance = float('inf')
    nearest_checkpoint = None
    for i, checkpoint in enumerate(checkpoints):
        distance = abs(student[0] - checkpoint[0]) + abs(student[1] - checkpoint[1])
        if distance < min_distance:
            min_distance = distance
            nearest_checkpoint = i + 1
    print(nearest_checkpoint)