def main():
    # read input
    N, K = map(int, input().split())
    desires = []
    for _ in range(N):
        x, y, c = input().split()
        x = int(x)
        y = int(y)
        desires.append((x, y, c))

    # initialize count of black and white squares
    black_count = [[0] * (K * 2) for _ in range(K * 2)]
    white_count = [[0] * (K * 2) for _ in range(K * 2)]

    # count black and white squares in each cell of the grid
    for x, y, c in desires:
        x %= (2 * K)
        y %= (2 * K)
        if c == 'B':
            black_count[x][y] += 1
            black_count[x][y + K] -= 1
            black_count[x + K][y] -= 1
            black_count[x + K][y + K] += 1
        else:
            white_count[x][y] += 1
            white_count[x][y + K] -= 1
            white_count[x + K][y] -= 1
            white_count[x + K][y + K] += 1   

    # calculate cumulative sum of black and white squares
    for i in range(2 * K):
        for j in range(1, 2 * K):
            black_count[i][j] += black_count[i][j - 1]
            white_count[i][j] += white_count[i][j - 1]
    for i in range(1, 2 * K):
        for j in range(2 * K):
            black_count[i][j] += black_count[i - 1][j]
            white_count[i][j] += white_count[i - 1][j]

    # find the maximum number of satisfied desires
    max_satisfied = 0
    for i in range(K):
        for j in range(K):
            satisfied = (
                black_count[i][j] + black_count[i + K][j + K] +
                white_count[i + K][j] + white_count[i][j + K]
            )
            max_satisfied = max(max_satisfied, satisfied)
            satisfied = (
                white_count[i][j] + white_count[i + K][j + K] +
                black_count[i + K][j] + black_count[i][j + K]
            )
            max_satisfied = max(max_satisfied, satisfied)

    # print the maximum number of satisfied desires
    print(max_satisfied)

if __name__ == '__main__':
    main()
