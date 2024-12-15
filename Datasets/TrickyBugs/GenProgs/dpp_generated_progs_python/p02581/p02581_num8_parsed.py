N = int(input())
cards = list(map(int, input().split()))

max_points = 0

for i in range(1, N+1):
    points = 0
    for j in range(1, N+1):
        if cards.count(j) >= 3:
            points += 1
            for _ in range(3):
                cards.remove(j)
    
    max_points += points
    cards = cards[5:]

if len(set(cards)) == 1:
    max_points += 1

print(max_points)