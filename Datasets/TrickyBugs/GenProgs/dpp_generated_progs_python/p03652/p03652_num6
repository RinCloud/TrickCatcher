from collections import defaultdict

def min_participants(N, M, sports):
    participants = defaultdict(int)
    
    for i in range(N):
        favorites = sports[i]

        for j in range(M):
            participants[favorites[j]] += 1
            
    return min(participants.values())

# taking input
N, M = map(int, input().split())
sports = []
for _ in range(N):
    sports.append(list(map(int, input().split())))

# calling the function and printing the result
result = min_participants(N, M, sports)
print(result)