N, V = map(int, input().split())
x = list(map(int, input().split()))

# Check if it is possible to visit all oases starting from each oasis
for i in range(N):
    # Start with full hump volume
    hump = V
    
    # Iterate through each oasis
    for j in range(N):
        # Calculate the distance between current and next oasis
        distance = abs(x[j] - x[i])
        
        # If the distance is greater than the hump volume, it is impossible to walk there
        if distance > hump:
            print("Impossible")
            break
        
        # If the distance is greater than hump/2, it is possible to jump there
        if distance > hump // 2:
            # Update the hump volume
            hump = hump // 2
        else:
            # Update the hump volume
            hump -= distance
        
    # If the loop completes without breaking, it is possible to visit all oases
    else:
        print("Possible")