# Reading input values
N, A, B = map(int, input().split())
X = list(map(int, input().split()))

# Initialize the total fatigue level to 0
total_fatigue = 0

# Iterate over the towns from the second town to the last
for i in range(1, N):
    # Calculate the distance between the current town and the previous town
    distance = X[i] - X[i - 1]
    
    # Calculate the fatigue level if the distance is covered by walking
    walking_fatigue = A * distance
    
    # Calculate the fatigue level if the distance is covered by teleportation
    teleportation_fatigue = B
    
    # Take the minimum between the walking and teleportation fatigue levels and add it to the total
    total_fatigue += min(walking_fatigue, teleportation_fatigue)

# Print the minimum possible total increase of the fatigue level
print(total_fatigue)