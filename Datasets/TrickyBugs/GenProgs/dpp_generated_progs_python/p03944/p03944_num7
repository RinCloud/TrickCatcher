# taking input from the user
W, H, N= map(int,input().split())

# initializing the entire area as white
area = W*H

# iterating through the points
for _ in range(N):
    x, y, a = map(int,input().split())
    
    # updating the area based on the painting
    if a == 1:
        area = min(area, x*H)
    elif a == 2:
        area = min(area, (W-x)*H)
    elif a == 3:
        area = min(area, y*W)
    elif a == 4:
        area = min(area, (H-y)*W)

# printing the final area
print(area)