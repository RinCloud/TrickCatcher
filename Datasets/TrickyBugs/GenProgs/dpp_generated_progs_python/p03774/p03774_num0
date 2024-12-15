import sys

def nearest_checkpoint(N, M, students, checkpoints):
    result = []
    for student in students:
        min_distance = sys.maxsize
        min_index = -1
        for i in range(M):
            distance = abs(student[0] - checkpoints[i][0]) + abs(student[1] - checkpoints[i][1])
            if distance < min_distance:
                min_distance = distance
                min_index = i + 1
        result.append(min_index)
    return result

if __name__ == "__main__":
    N, M = map(int, input().split())
    students = []
    for _ in range(N):
        students.append(list(map(int, input().split())))
    checkpoints = []
    for _ in range(M):
        checkpoints.append(list(map(int, input().split())))
    for index in nearest_checkpoint(N, M, students, checkpoints):
        print(index)