# Reading input
N, M = map(int, input().split())
chairs = []
for _ in range(N):
    L, R = map(int, input().split())
    chairs.append((L, R))

# Sorting chairs based on their left coordinate
chairs.sort()

# Initializing variables
required_chairs = 0
max_right = -1

# Iterating through each chair
for i in range(N):
    L, R = chairs[i]
  
    # If the left coordinate of current chair is greater than max_right
    # then a new chair is required between max_right and L
    if L > max_right:
        required_chairs += L - max_right - 1
        max_right = L
    
    # Updating max_right if current chair's right coordinate is greater than it
    if R > max_right:
        max_right = R
  
# If max_right is less than M, additional chairs are required at right of max_right
if max_right < M:
    required_chairs += M - max_right

# Printing the result
print(required_chairs)