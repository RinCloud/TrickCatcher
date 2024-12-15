a1, a2, a3 = map(int, input().split())
b1, b2, b3 = map(int, input().split())
c1, c2, c3 = map(int, input().split())
N = int(input())

bingo = [[a1, a2, a3], [b1, b2, b3], [c1, c2, c3]]

numbers = []
for _ in range(N):
    numbers.append(int(input()))

# Checking rows
for row in bingo:
    if set(row).issubset(set(numbers)):
        print("Yes")
        exit()

# Checking columns
for i in range(3):
    column = [bingo[0][i], bingo[1][i], bingo[2][i]]
    if set(column).issubset(set(numbers)):
        print("Yes")
        exit()

# Checking diagonal
if set([bingo[0][0], bingo[1][1], bingo[2][2]]).issubset(set(numbers)) or set([bingo[0][2], bingo[1][1], bingo[2][0]]).issubset(set(numbers)):
    print("Yes")
    exit()

print("No")