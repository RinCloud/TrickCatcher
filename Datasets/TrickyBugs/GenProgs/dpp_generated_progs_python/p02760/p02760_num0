# Here's a Python program that solves the given problem:

bingo_card = []
for _ in range(3):
    row = list(map(int, input().split()))
    bingo_card.append(row)

N = int(input())

numbers_chosen = []
for _ in range(N):
    number = int(input())
    numbers_chosen.append(number)

# Checking rows
for i in range(3):
    if all(number in numbers_chosen for number in bingo_card[i]):
        print("Yes")
        exit()

# Checking columns
for j in range(3):
    if all(
        number in numbers_chosen for number in [bingo_card[i][j] for i in range(3)]
    ):
        print("Yes")
        exit()

# Checking diagonals
if (
    all(number in numbers_chosen for number in [bingo_card[i][i] for i in range(3)])
    or all(number in numbers_chosen for number in [bingo_card[i][2 - i] for i in range(3)])
):
    print("Yes")
else:
    print("No")