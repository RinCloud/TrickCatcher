# Program

def divide_chocolate(H, W):
    min_diff = float('inf')
    # check all possible ways to divide the chocolate
    for i in range(1, W):
        s1 = H * i
        s2 = (W - i) * (H // 2)
        s3 = (W - i) * (H - H // 2)
        
        areas = [s1, s2, s3]
        max_area = max(areas)
        min_area = min(areas)
        diff = max_area - min_area
        
        min_diff = min(min_diff, diff)
    
    return min_diff

# Read input from standard input
H, W = map(int, input().split())

# Call the divide_chocolate function
result = divide_chocolate(H, W)

# Print the result
print(result)