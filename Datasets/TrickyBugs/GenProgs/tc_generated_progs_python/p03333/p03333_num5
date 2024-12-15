from heapq import heappush, heappop
N = int(input())
S = []
for i in range(N):
    l, r = map(int, input().split())
    S.append((l, r))
S.sort()

if all(l <= 0 <= r for l, r in S):
    print(0)
    exit(0)

que = []
Q = [l for l, r in S]
Q.reverse()
ans = 0
a = b = 0
p = 0
for i in range(N+1):
    if i < N:
        l, r = S[i]
    while que and que[0] <= l:
        heappop(que)
    cnt = min(len(que), len(Q))
    while p < cnt:
        a += heappop(que)
        b += Q[p]
        p += 1
    ans = max(ans, abs(a-b)*2)
    if len(que) < len(Q):
        b2 = b + Q[cnt]
        ans = max(ans, abs(a-b2)*2)
    elif len(que) > len(Q):
        a2 = a + heappop(que)
        ans = max(ans, abs(a2-b)*2)
    heappush(que, r)
    if cnt == len(Q) > 0:
        a -= heappop(que)
        b -= Q[cnt-1]
    if i < N:
        Q.pop()
print(ans)