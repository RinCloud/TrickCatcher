# Program

import numpy as np

def min_participants(N, M, sports_preferences):
    
    max_participants = 0
    
    # Count the number of participants for each sport
    for sport in range(1, M+1):
        participants = np.sum(np.array(sports_preferences) == sport)
        max_participants = max(max_participants, participants)
    
    return max_participants

# Read input from standard input
N, M = map(int, input().split())

sports_preferences = []
for _ in range(N):
    preferences = list(map(int, input().split()))
    sports_preferences.append(preferences)

# Call the function and print the result
result = min_participants(N, M, sports_preferences)
print(result)