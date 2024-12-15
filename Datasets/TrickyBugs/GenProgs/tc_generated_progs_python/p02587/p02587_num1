**REPAIRED CODE**:

from heapq import heapify, heappush, heappop
from time import time

def find_palindrome_cost(N, S, C):
    K = 150
    sTime = time()
    D = {}
    H = []
    ans = 1 << K

    for i in range(N):
        s, c = S[i], C[i]
        IS = s[::-1]
        D[i] = [i, 0, "", 0]
        H.append(i * (1 << K) + c)
    
    heapify(H)
    while H:
        r = heappop(H)
        i, d, s, c = D[r // (1 << K)]
        if d == 0:
            for j, ss, cc in zip(range(N), S, C):
                m = min(len(s), len(ss))
                if s[:m] == ss[:m]:
                    if abs(len(s) - len(ss)) <= 1 or len(ss) > len(s) and ss[m:] == ss[m:][::-1]:
                        ans = min(ans, c + cc)
                    else:
                        if len(s) < len(ss):
                            r = rand() + (cc << K)
                            D[r] = [j, 1, ss[m:], c + cc]
                            heappush(H, r)
                        else:
                            r = rand() + (cc << K)
                            D[r] = [j, 0, s[m:], c + cc]
                            heappush(H, r)
        else:
            for j, ss, cc in zip(range(N), S, C):
                m = min(len(s), len(ss))
                if s[:m] == ss[:m]:
                    if abs(len(s) - len(ss)) <= 1 or len(ss) > len(s) and ss[m:] == ss[m:][::-1]:
                        ans = min(ans, c + cc)
                    else:
                        if len(s) < len(ss):
                            r = rand() + (cc << K)
                            D[r] = [j, 0, ss[m:], c + cc]
                            heappush(H, r)
                        else:
                            r = rand() + (cc << K)
                            D[r] = [j, 1, s[m:], c + cc]
                            heappush(H, r)

    return ans if ans < 1 << K - 2 else -1

# Test the code with provided input
N = 3
S = ['ba', 'abc', 'cbaa']
C = [3, 4, 5]
print(find_palindrome_cost(N, S, C))

N = 2
S = ['abcab', 'cba']
C = [5, 3]
print(find_palindrome_cost(N, S, C))

N = 4
S = ['ab', 'cba', 'a', 'ab']
C = [5, 3, 12, 10]
print(find_palindrome_cost(N, S, C))

N = 2
S = ['abc', 'ab']
C = [1, 2]
print(find_palindrome_cost(N, S, C))