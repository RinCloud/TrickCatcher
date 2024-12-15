# Program

H, W = map(int, input().split())

min_diff = float('inf')

# Divide the bar along the height
for i in range(1, H):
    area1 = i * W
    area2 = (H - i) * (W // 2)
    area3 = (H - i) * (W - W // 2)
    
    max_area = max(area1, area2, area3)
    min_area = min(area1, area2, area3)
    
    min_diff = min(min_diff, max_area - min_area)

# Divide the bar along the width
for i in range(1, W):
    area1 = i * H
    area2 = (W - i) * (H // 2)
    area3 = (W - i) * (H - H // 2)
    
    max_area = max(area1, area2, area3)
    min_area = min(area1, area2, area3)
    
    min_diff = min(min_diff, max_area - min_area)

print(min_diff)