# Program to find the minimum possible number of participants in the sport with the largest number of participants

# Reading input values
N, M = map(int, input().split())

# Creating a list to store the number of participants for each sport
participants = [0] * M

# Looping through each participant
for i in range(N):
    preferences = list(map(int, input().split()))
    favorite_sport = preferences[0]
    
    # Incrementing the number of participants for the favorite sport
    participants[favorite_sport - 1] += 1

# Finding the minimum possible number of participants in the sport with the largest number of participants
min_participants = min(participants)

# Printing the output
print(min_participants)