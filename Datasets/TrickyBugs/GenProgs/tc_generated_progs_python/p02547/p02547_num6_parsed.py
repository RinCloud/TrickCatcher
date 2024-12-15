N = int(input())
dice = [tuple(map(int, input().split())) for _ in range(N)]

found = False
for i in range(N-2):
    if dice[i][0] == dice[i][1] and dice[i+1][0] == dice[i+1][1] and dice[i+2][0] == dice[i+2][1]:
        found = True
        break

if found:
    print('Yes')
else:
    print('No')
