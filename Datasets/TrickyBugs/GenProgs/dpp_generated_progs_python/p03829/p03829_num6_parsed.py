# Reading the input
N, A, B = map(int, input().split())
X = list(map(int, input().split()))

# Initializing the total fatigue level
total_fatigue = 0

# Iterating through each town (except the first one)
for i in range(1, N):
    # Calculating the distance between the current town and the previous one
    distance = X[i] - X[i-1]
    
    # Adding the minimum fatigue level needed to cover the distance
    total_fatigue += min(A * distance, B)

# Printing the minimum possible total increase of fatigue level
print(total_fatigue)