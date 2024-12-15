from bisect import bisect_left
 
A, B, Q = map(int, input().split())
INF = float('inf')
 
s = [-INF] + [int(input()) for _ in range(A)] + [INF]
t = [-INF] + [int(input()) for _ in range(B)] + [INF]
 
for _ in range(Q):
    x = int(input())
    
    shrine_idx = bisect_left(s, x)
    temple_idx = bisect_left(t, x)
    
    ans = INF
    
    for S in [s[shrine_idx-1], s[shrine_idx]]:
        for T in [t[temple_idx-1], t[temple_idx]]:
            # Case 1: Go to the shrine first, then the temple
            d1 = abs(x - S) + abs(S - T)
            # Case 2: Go to the temple first, then the shrine
            d2 = abs(x - T) + abs(T - S)
            
            ans = min(ans, d1, d2)
    
    print(ans)