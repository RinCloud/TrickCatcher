N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
import sys
for i in range(N-M+1):
    for j in range(N-M+1):
        found = True
        for a in range(M):
            for b in range(M):
                if A[i+a][j+b] != B[a][b]:
                    found = False
                    break
            if not found:
                break
        if found:
            print('Yes')
            sys.exit()
print('No')