# Program to find the minimum possible total increase of fatigue level when visiting all towns.

# Read the input values
N, A, B = map(int, input().split())
X = list(map(int, input().split()))

# Initialize total fatigue level
total_fatigue = 0

# Iterate over all towns
for i in range(N-1):
    # Calculate the distance between current town and next town
    distance = X[i+1] - X[i]
    
    # Calculate the fatigue level when walking the distance
    walking_fatigue = A * distance
    
    # Calculate the fatigue level when teleporting
    teleporting_fatigue = B
    
    # Choose the minimum fatigue level between walking and teleporting
    min_fatigue = min(walking_fatigue, teleporting_fatigue)
    
    # Increment the total fatigue level
    total_fatigue += min_fatigue

# Print the minimum possible total increase of fatigue level
print(total_fatigue)