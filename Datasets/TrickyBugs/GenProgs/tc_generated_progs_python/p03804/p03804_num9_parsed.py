N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
import sys
for i in range(N-M+1):
    for j in range(N-M+1):
        flag = True
        for x in range(M):
            if not flag:
                break
            for y in range(M):
                if A[i+x][j+y] != B[x][y]:
                    flag = False
                    break
        if flag:
            print('Yes')
            sys.exit()
print('No')