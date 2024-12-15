card = []
for _ in range(3):
    row = list(map(int, input().split()))
    card.append(row)

N = int(input())

numbers_chosen = set()
for _ in range(N):
    number = int(input())
    numbers_chosen.add(number)

bingo = False
# Check rows
for i in range(3):
    if card[i][0] in numbers_chosen and card[i][1] in numbers_chosen and card[i][2] in numbers_chosen:
        bingo = True

# Check columns
for j in range(3):
    if card[0][j] in numbers_chosen and card[1][j] in numbers_chosen and card[2][j] in numbers_chosen:
        bingo = True

# Check diagonals
if card[0][0] in numbers_chosen and card[1][1] in numbers_chosen and card[2][2] in numbers_chosen:
    bingo = True

if card[0][2] in numbers_chosen and card[1][1] in numbers_chosen and card[2][0] in numbers_chosen:
    bingo = True

if bingo:
    print("Yes")
else:
    print("No")