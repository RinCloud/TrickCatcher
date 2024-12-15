N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
import sys
for i in range(N-M+1):
    for j in range(N-M+1):
        match = True
        for x in range(M):
            for y in range(M):
                if B[x][y] != A[i+x][j+y]:
                    match = False
                    break
            if not match:
                break
        if match:
            print('YES')
            sys.exit()
print('NO')