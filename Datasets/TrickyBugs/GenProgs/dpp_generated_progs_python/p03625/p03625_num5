def max_rectangle_area(N, sticks):
    sticks = sorted(sticks, reverse=True)
    pairs = []
    for i in range(N-1):
        for j in range(i+1, N):
            pairs.append((sticks[i], sticks[j]))
    
    max_area = 0
    for pair in pairs:
        if pair[0] == pair[1]:
            area = pair[0] ** 2
        else:
            area = min(pair) * max(pair)
        
        max_area = max(max_area, area)
    
    return max_area

# Read inputs
N = int(input())
sticks = list(map(int, input().split()))

# Calculate and print the maximum possible area of the rectangle
print(max_rectangle_area(N, sticks))