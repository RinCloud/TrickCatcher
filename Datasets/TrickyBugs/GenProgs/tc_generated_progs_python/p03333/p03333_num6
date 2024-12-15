from heapq import heappush, heappop
from collections import deque

N = int(input())
S = []
for i in range(N):
    l, r = map(int, input().split())
    S.append((l, r))
S.sort()

if all(l <= 0 <= r for l, r in S):
    print(0)
    exit(0)

P = deque()
Q = deque()
for l, r in S:
    heappush(P, l)
    heappush(Q, -r)
    
ans = 0
a = b = 0
while P:
    l = heappop(P)
    r = -heappop(Q)
    a += l
    b += r
    ans = max(ans, abs(a-b)*2)
print(ans)