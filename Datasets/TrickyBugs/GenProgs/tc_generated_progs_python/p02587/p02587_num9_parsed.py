from random import randrange
from heapq import heapify, heappush, heappop
from time import time

def is_palindrome(s):
    return s == s[::-1]

K = 150
rand = lambda: randrange(1 << K)
sTime = time()
N = int(input())
S, C = [], []
for _ in range(N):
    s, c = input().split()
    S.append(s)
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
    d, s, cc = D[r]
    if d == 0:
        for ss, c in zip(S, C):
            m = min(len(s), len(ss))
            if s[:m] == ss[:m]:
                if abs(len(s) - len(ss)) <= 1 or (len(ss) > len(s) and is_palindrome(ss[m:])):
                    ans = min(ans, cc + c)
                else:
                    if len(s) < len(ss):
                        r = rand() + (cc + c << K)
                        D[r] = (1, ss[m:], cc + c)
                        heappush(H, r)
                    else:
                        r = rand() + (cc + c << K)
                        D[r] = (0, s[m:], cc + c)
                        heappush(H, r)
    else:
        for ss, c in zip(S, C):
            ss = ss[::-1]
            m = min(len(s), len(ss))
            if s[:m] == ss[:m]:
                if abs(len(s) - len(ss)) <= 1 or (len(ss) > len(s) and is_palindrome(ss[m:])):
                    ans = min(ans, cc + c)
                else:
                    if len(s) < len(ss):
                        r = rand() + (cc + c << K)
                        D[r] = (0, ss[m:], cc + c)
                        heappush(H, r)
                    else:
                        r = rand() + (cc + c << K)
                        D[r] = (1, s[m:], cc + c)
                        heappush(H, r)

print(ans if ans < 1 << K - 2 else -1)