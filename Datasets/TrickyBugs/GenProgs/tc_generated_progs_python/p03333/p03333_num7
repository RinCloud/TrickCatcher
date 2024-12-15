from heapq import heappush, heappop

# Reading inputs
N = int(input())
S = []
for i in range(N):
    l, r = map(int, input().split())
    S.append((l, r))
S.sort()

# Checking if starting at 0 is possible
if all(l <= 0 <= r for l, r in S):
    print(0)
    exit(0)

# Variables initialization
que = []
P = []
Q = [l for l, r in S]
Q.reverse()
ans = 0
a = b = 0
p = 0
for i in range(N+1):
    if i < N:
        l, r = S[i]

    # Removing segments that have no effect on distance
    while que and que[0] <= l:
        P.append(heappop(que))

    cnt = min(len(P), len(Q))

    # Calculating distance for Takahashi's current position
    while p < cnt:
        a += P[p]
        b += Q[p]
        p += 1

    # Updating the answer
    ans = max(ans, abs(a-b)*2)

    # Checking if adding one more segment would change the distance
    if len(P) < len(Q):
        b2 = b + Q[cnt]
        ans = max(ans, abs(a-b2)*2)
    elif len(P) > len(Q):
        a2 = a + P[cnt]
        ans = max(ans, abs(a2-b)*2)

    # Adding segment to que
    heappush(que, r)

    # Removing last segment if necessary
    if cnt == len(Q) > 0:
        a -= P[cnt-1]
        b -= Q[cnt-1]

    if i < N:
        Q.pop()

# Printing the answer
print(ans)