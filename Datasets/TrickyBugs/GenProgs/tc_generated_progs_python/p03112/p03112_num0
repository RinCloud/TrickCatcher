A, B, Q = list(map(int, input().split()))
S = [-int(1e11)] + [int(input()) for _ in range(A)] + [int(1e11)]
T = [-int(1e11)] + [int(input()) for _ in range(B)] + [int(1e11)]
X = [int(input()) for _ in range(Q)]

import bisect
for x in X:
  SL = max(S[bisect.bisect_left(S, x) -1],1)
  SR = min(S[bisect.bisect_right(S, x)],1e11)
  TL = max(T[bisect.bisect_left(T, x) -1],1)
  TR = min(T[bisect.bisect_right(T, x)],1e11)
  
  print(min(x-min(SL,TL), max(SR,TR)-x, TR+x-2*SL, SR+x-2*TL, 2*min(SR-x,x-TL), 2*min(TR-x,x-SL)))
