H, W, K = map(int, input().split())

chocolate_bar = []
for _ in range(H):
    row = list(input())
    chocolate_bar.append(row)

cuts = 0
white_squares = 0

for row in chocolate_bar:
    if white_squares > K:
        cuts += 1
        white_squares = 0

    for square in row:
        if square == '1':
            white_squares += 1

if white_squares > K:
    cuts += 1

print(cuts)