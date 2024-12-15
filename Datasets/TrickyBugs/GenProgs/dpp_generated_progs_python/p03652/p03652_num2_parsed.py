N, M = map(int, input().split())

sports_preferences = []
for i in range(N):
    preferences = list(map(int, input().split()))
    sports_preferences.append(preferences)

participants_count = [0] * M

for i in range(N):
    for j in range(M):
        sport = sports_preferences[i][j]
        participants_count[sport - 1] += 1

min_participants = min(participants_count)

print(min_participants)