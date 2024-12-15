# Program

def check_bingo(bingo_card, chosen_numbers):
    # Check rows
    for row in bingo_card:
        if all(num in row for num in chosen_numbers):
            return True
    
    # Check columns
    for column in range(3):
        if all(bingo_card[row][column] in chosen_numbers for row in range(3)):
            return True
    
    # Check diagonals
    if all(bingo_card[i][i] in chosen_numbers for i in range(3)):
        return True
    
    if all(bingo_card[i][2-i] in chosen_numbers for i in range(3)):
        return True
    
    return False

# Read input
bingo_card = []
for _ in range(3):
    bingo_card.append(list(map(int, input().split())))

N = int(input())
chosen_numbers = [int(input()) for _ in range(N)]

# Check bingo
if check_bingo(bingo_card, chosen_numbers):
    print("Yes")
else:
    print("No")