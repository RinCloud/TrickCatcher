def nearest_checkpoint(N, M, students, checkpoints):
    ans = []
    for student in students:
        min_distance = float('inf')
        min_checkpoint = -1
        for i, checkpoint in enumerate(checkpoints):
            distance = abs(student[0] - checkpoint[0]) + abs(student[1] - checkpoint[1])
            if distance < min_distance:
                min_distance = distance
                min_checkpoint = i + 1
        ans.append(min_checkpoint)
    return ans


N, M = map(int, input().split())
students = []
for _ in range(N):
    students.append(list(map(int, input().split())))
checkpoints = []
for _ in range(M):
    checkpoints.append(list(map(int, input().split())))

result = nearest_checkpoint(N, M, students, checkpoints)
for r in result:
    print(r)