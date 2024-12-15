from heapq import *
N,M = map(int,input().split())
LR = [ tuple(map(int, input().split())) for _ in range(N)]
LR.sort()
ans = 0
using = []
ability = M
for (l, r) in LR:
    while using and using[0] < l:
        ability += 1
        heappop(using)
    if l <= ability:
        ability -= 1
    else:
        ans += 1
    heappush(using, r)
print(ans)