A, B, Q = list(map(int, input().split()))
S = [-int(1e11)] + [int(input()) for _ in range(A)] + [int(1e11)]
T = [-int(1e11)] + [int(input()) for _ in range(B)] + [int(1e11)]
X = [int(input()) for _ in range(Q)]

import bisect
for x in X:
  SL = S[bisect.bisect_right(S, x) -1]
  SR = S[bisect.bisect_right(S, x)]
  TL = T[bisect.bisect_right(T, x) -1]
  TR = T[bisect.bisect_right(T, x)]

  print(min(x-min(SL,TL), max(SR,TR)-x, TR+x-2*SL, SR+x-2*TL, 2*SR-x-TL, 2*TR-x-SL))