N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
import sys
for i in range(N - M + 1):
    for j in range(N - M + 1):
        is_match = True
        for k in range(M):
            if B[k] != A[i + k][j:j+M]:
                is_match = False
                break
        if is_match:
            print('Yes')
            sys.exit()
print('No')