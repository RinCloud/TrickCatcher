N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]

def check_pattern(i, j):
    for x in range(M):
        for y in range(M):
            if A[i+x][j+y] != B[x][y]:
                return False
    return True

def find_pattern():
    for i in range(N - M + 1):
        for j in range(N - M + 1):
            if check_pattern(i, j):
                return True
    return False

if find_pattern():
    print("Yes")
else:
    print("No")