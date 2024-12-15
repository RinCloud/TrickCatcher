N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]

def check_match():
    for i in range(N - M + 1):
        for j in range(N - M + 1):
            match = True
            for x in range(M):
                for y in range(M):
                    if A[i + x][j + y] != B[x][y]:
                        match = False
                        break
                if not match:
                    break
            if match:
                return True
    return False

if check_match():
    print("Yes")
else:
    print("No")