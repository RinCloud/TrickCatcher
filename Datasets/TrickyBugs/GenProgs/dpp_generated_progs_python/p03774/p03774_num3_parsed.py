def main():
    N, M = map(int, input().split())
    students = []
    for _ in range(N):
        students.append(list(map(int, input().split())))
    checkpoints = []
    for _ in range(M):
        checkpoints.append(list(map(int, input().split())))

    ans = []
    for student in students:
        min_dist = float('inf')
        idx = 0
        for i in range(M):
            dist = abs(student[0] - checkpoints[i][0]) + abs(student[1] - checkpoints[i][1])
            if dist < min_dist:
                min_dist = dist
                idx = i + 1
        ans.append(idx)

    for res in ans:
        print(res)


if __name__ == '__main__':
    main()