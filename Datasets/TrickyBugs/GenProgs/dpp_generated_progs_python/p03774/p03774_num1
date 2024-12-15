# Approach:
1. Read the values of N and M from input.
2. Read the coordinates of students and checkpoints.
3. For each student, calculate the Manhattan distance to each checkpoint and find the nearest checkpoint.
4. Print the index of the nearest checkpoint for each student.

# Program:

def nearest_checkpoint(N, M, students, checkpoints):
    for student in students:
        min_distance = float('inf')
        nearest_checkpoint = None
        for index, checkpoint in enumerate(checkpoints):
            distance = abs(student[0] - checkpoint[0]) + abs(student[1] - checkpoint[1])
            if distance < min_distance:
                min_distance = distance
                nearest_checkpoint = index + 1
        print(nearest_checkpoint)

N, M = map(int, input().split())
students = []
checkpoints = []
for _ in range(N):
    students.append(list(map(int, input().split())))
for _ in range(M):
    checkpoints.append(list(map(int, input().split())))

nearest_checkpoint(N, M, students, checkpoints)