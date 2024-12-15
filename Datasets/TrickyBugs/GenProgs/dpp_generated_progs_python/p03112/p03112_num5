# Generating code for the given program intention:

A, B, Q = map(int, input().split())

shrine_positions = [int(input()) for _ in range(A)]
temple_positions = [int(input()) for _ in range(B)]

query_positions = [int(input()) for _ in range(Q)]

inf = float('inf')

shrine_positions = [-inf] + shrine_positions + [inf]
temple_positions = [-inf] + temple_positions + [inf]

for query_position in query_positions:
    ans = inf
    
    for shrine_pos in shrine_positions:
        for temple_pos in temple_positions:
            west = min(shrine_pos, temple_pos)
            east = max(shrine_pos, temple_pos)
            
            dist_west = query_position - west
            dist_east = east - query_position
            
            dist = min(dist_west, dist_east) + (east - west)
            
            ans = min(ans, dist)
    
    print(ans)