from random import randrange
from heapq import heapify, heappush, heappop
from time import time
K = 150
rand = lambda: randrange(1 << K)
sTime = time()
N = int(input())
S, IS, C = [], [], []
for _ in range(N):
    s, c = input().split()
    S.append(s)
    IS.append(s[::-1])
    C.append(int(c))

D = {}
r = rand()
D[r] = (0, "", 0)
H = [r]
ans = 1 << K
while H:
    r = heappop(H)
    if time() - sTime > 1.7:
        break
    d, s, c = D[r]
    if d == 0:
        for i, ss, cc in zip(range(len(S)), S, C):
            m = min(len(s), len(ss))
            if s[:m] == ss[:m]:
                if abs(len(s) - len(ss)) <= 1 or len(ss) > len(s) and ss[m:] == ss[m:][::-1]:
                    ans = min(ans, c + cc)
                else:
                    if len(s) < len(ss):
                        r = rand() + (c + cc << K)
                        D[r] = (1, ss[m:], c + cc)
                        heappush(H, r)
                    else:
                        r = rand() + (c + cc << K)
                        D[r] = (0, s[m:], c + cc)
                        heappush(H, r)
    else:
        for i, ss, cc in zip(range(len(IS)), IS, C):
            m = min(len(s), len(ss))
            if s[:m] == ss[:m]:
                if abs(len(s) - len(ss)) <= 1 or len(ss) > len(s) and ss[m:] == ss[m:][::-1]:
                    ans = min(ans, c + cc)
                else:
                    if len(s) < len(ss):
                        r = rand() + (c + cc << K)
                        D[r] = (0, ss[m:], c + cc)
                        heappush(H, r)
                    else:
                        r = rand() + (c + cc << K)
                        D[r] = (1, s[m:], c + cc)
                        heappush(H, r)

print(ans if ans < 1 << K - 2 else -1)