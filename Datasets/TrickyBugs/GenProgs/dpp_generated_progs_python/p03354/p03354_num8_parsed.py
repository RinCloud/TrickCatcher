from typing import List, Tuple

def maximum_fixed_points(N: int, M: int, p: List[int], pairs: List[Tuple[int, int]]) -> int:
    fixed_points = set()
    for i in range(N):
        if p[i] == i+1:
            fixed_points.add(i+1)
    
    for pair in pairs:
        x, y = pair
        p[x-1], p[y-1] = p[y-1], p[x-1]
        if p[x-1] == x:
            fixed_points.add(x)
        else:
            fixed_points.discard(x)
        if p[y-1] == y:
            fixed_points.add(y)
        else:
            fixed_points.discard(y)
    
    return len(fixed_points)

# Read input
N, M = map(int, input().split())
p = list(map(int, input().split()))
pairs = [tuple(map(int, input().split())) for _ in range(M)]

# Print the maximum possible number of i such that p_i = i after operations
print(maximum_fixed_points(N, M, p, pairs))