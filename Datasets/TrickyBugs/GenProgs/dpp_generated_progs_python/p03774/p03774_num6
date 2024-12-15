def nearest_checkpoint(N, M, students, checkpoints):
    result = []
    for student in students:
        min_distance = float('inf')
        min_index = None
        for i, checkpoint in enumerate(checkpoints):
            distance = abs(student[0] - checkpoint[0]) + abs(student[1] - checkpoint[1])
            if distance < min_distance:
                min_distance = distance
                min_index = i + 1
        result.append(min_index)
    return result


N, M = map(int, input().split())
students = [list(map(int, input().split())) for _ in range(N)]
checkpoints = [list(map(int, input().split())) for _ in range(M)]

output = nearest_checkpoint(N, M, students, checkpoints)
for o in output:
    print(o)