def calculate_points(N, cards):
    points = 0
    i = 0
    while i < N-1:
        if cards[i] == cards[i+1] == cards[i+2] == cards[i+3] == cards[i+4]:
            points += 1
            i += 5
        else:
            i += 1
    
    if cards[N-1] == cards[N] == cards[N+1]:
        points += 1
    
    return points

N = int(input())
cards = list(map(int, input().split()))

print(calculate_points(N, cards))
