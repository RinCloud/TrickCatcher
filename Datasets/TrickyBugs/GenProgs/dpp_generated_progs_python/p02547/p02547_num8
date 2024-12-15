n = int(input())
dices = [list(map(int, input().split())) for _ in range(n)]

for i in range(n-2):
    if dices[i][0] == dices[i][1] and dices[i+1][0] == dices[i+1][1] and dices[i+2][0] == dices[i+2][1]:
        print('Yes')
        exit()

print('No')