# Program to find the minimum possible number of participants in the sport with the largest number of participants

def min_participants(N, M, sports):
    # Count the number of participants for each sport
    participants = [0] * M
    for i in range(N):
        participants[sports[i][0] - 1] += 1
    
    # Find the minimum number of participants in a sport
    min_participants = min(participants)
    
    return min_participants

# Get the input
N, M = map(int, input().split())
sports = [list(map(int, input().split())) for _ in range(N)]

# Call the function and print the result
print(min_participants(N, M, sports))