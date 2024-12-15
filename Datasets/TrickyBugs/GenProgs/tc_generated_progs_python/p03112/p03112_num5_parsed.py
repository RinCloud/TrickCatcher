A, B, Q = list(map(int, input().split()))
S = [-int(1e11)] + [int(input()) for _ in range(A)] + [int(1e11)]
T = [-int(1e11)] + [int(input()) for _ in range(B)] + [int(1e11)]
X = [int(input()) for _ in range(Q)]

import bisect
for x in X:
  SL = bisect.bisect_right(S, x) - 1
  SR = bisect.bisect_left(S, x)
  TL = bisect.bisect_right(T, x) - 1
  TR = bisect.bisect_left(T, x)

  print(min(x-S[SL], S[SR]-x, T[TL]-x, x-T[TR], 
            2*min(x-SL, SR-x, x-TL, TR-x) + abs(x-SL-TR), 
            2*min(x-SR, SL-x, x-TR, TL-x) + abs(x-SR-TL)))