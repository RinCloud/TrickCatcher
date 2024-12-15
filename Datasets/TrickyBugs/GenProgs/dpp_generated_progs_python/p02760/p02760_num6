a = []
for i in range(3):
    a.append(list(map(int, input().split())))
n = int(input())
b = []
for i in range(n):
    b.append(int(input()))
bingo = False
for i in range(3):
    if all([a[i][j] in b for j in range(3)]) or all([a[j][i] in b for j in range(3)]):
        bingo = True
if all([a[i][i] in b for i in range(3)]) or all([a[i][2-i] in b for i in range(3)]):
    bingo = True
if bingo:
    print("Yes")
else:
    print("No")