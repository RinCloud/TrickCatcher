def find_min_mp(n, a, b, c, lengths):
    min_mp = float('inf')
    
    def dfs(idx, mp, length_a, length_b, length_c):
        nonlocal min_mp
        
        if idx == n:
            if length_a != 0 and length_b != 0 and length_c != 0:
                current_mp = abs(a - length_a) + abs(b - length_b) + abs(c - length_c) + mp - 30
                min_mp = min(min_mp, current_mp)
            return
        
        dfs(idx+1, mp, length_a, length_b, length_c)
        dfs(idx+1, mp+1, length_a+lengths[idx], length_b, length_c)
        dfs(idx+1, mp+1, length_a, length_b+lengths[idx], length_c)
        dfs(idx+1, mp+1, length_a, length_b, length_c+lengths[idx])
    
    dfs(0, 0, 0, 0, 0)
    
    return min_mp

# Read input
n, a, b, c = map(int, input().split())
lengths = [int(input()) for _ in range(n)]

# Find minimum MP needed
min_mp = find_min_mp(n, a, b, c, lengths)

# Print the result
print(min_mp)