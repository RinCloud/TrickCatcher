N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
import sys
for a in A:
    for b in B:
        if b not in a:
            print('No')
            sys.exit()
print('Yes')