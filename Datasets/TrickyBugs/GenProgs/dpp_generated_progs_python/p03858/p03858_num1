"""
def find_num_pointed_pairs(N, a, b, pinholes):
    count = 0
    d_ab = abs(pinholes[a-1][0] - pinholes[b-1][0]) + abs(pinholes[a-1][1] - pinholes[b-1][1])
    
    for i in range(N):
        d_ai = abs(pinholes[a-1][0] - pinholes[i][0]) + abs(pinholes[a-1][1] - pinholes[i][1])
        d_bi = abs(pinholes[b-1][0] - pinholes[i][0]) + abs(pinholes[b-1][1] - pinholes[i][1])
        
        if d_ai == d_ab == d_bi:
            count += 1
    
    return count


# Read input
N, a, b = map(int, input().split())
pinholes = []
for _ in range(N):
    x, y = map(int, input().split())
    pinholes.append((x, y))

# Call function and print result
result = find_num_pointed_pairs(N, a, b, pinholes)
print(result)
"""