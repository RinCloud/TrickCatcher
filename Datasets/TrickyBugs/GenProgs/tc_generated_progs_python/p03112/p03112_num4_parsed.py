A, B, Q = list(map(int, input().split()))
S = [-int(1e11)] + [int(input()) for _ in range(A)] + [int(1e11)]
T = [-int(1e11)] + [int(input()) for _ in range(B)] + [int(1e11)]
X = [int(input()) for _ in range(Q)]

import bisect
for x in X:
  # Find the leftmost shrine and temple on the west side of x
  SL = S[bisect.bisect_right(S, x) -1]
  TL = T[bisect.bisect_right(T, x) -1]
  
  # Find the rightmost shrine and temple on the east side of x
  SR = S[bisect.bisect_left(S, x)]
  TR = T[bisect.bisect_left(T, x)]
  
  print(min(x-min(SL,TL), max(SR,TR)-x, TR+x-2*SL, SR+x-2*TL, 2*SR-x-TL, 2*TR-x-SL))