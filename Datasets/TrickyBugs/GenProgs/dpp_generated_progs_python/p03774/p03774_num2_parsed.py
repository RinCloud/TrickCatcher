def nearest_checkpoint(N, M, students, checkpoints):
    ans = []
    for i in range(N):
        min_dist = float('inf')
        index = -1
        for j in range(M):
            dist = abs(students[i][0] - checkpoints[j][0]) + abs(students[i][1] - checkpoints[j][1])
            if dist < min_dist:
                min_dist = dist
                index = j + 1
        ans.append(index)
    return ans

N, M = map(int, input().split())
students = []
for _ in range(N):
    students.append(tuple(map(int, input().split())))
checkpoints = []
for _ in range(M):
    checkpoints.append(tuple(map(int, input().split())))

result = nearest_checkpoint(N, M, students, checkpoints)
for res in result:
    print(res)