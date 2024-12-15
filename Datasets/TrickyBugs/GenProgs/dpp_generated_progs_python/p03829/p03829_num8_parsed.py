import sys

def min_fatigue_level(N, A, B, X):
    # Calculate the fatigue levels for walking
    walking_fatigue = 0
    for i in range(N - 1):
        walking_fatigue += A * (X[i + 1] - X[i])

    # Calculate the fatigue levels for teleporting
    teleport_fatigue = (N - 1) * B

    # Return the minimum fatigue level
    return min(walking_fatigue, teleport_fatigue)

# Read the input from standard input
N, A, B = map(int, input().split())
X = list(map(int, input().split()))

# Print the minimum fatigue level
print(min_fatigue_level(N, A, B, X))