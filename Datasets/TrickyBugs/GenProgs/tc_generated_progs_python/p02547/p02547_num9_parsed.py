**REPAIRED CODE**:

n = int(input())
dice = [list(map(int, input().split())) for _ in range(n)]
found = False

for i in range(n-2):
    if dice[i][0] == dice[i][1] and dice[i+1][0] == dice[i+1][1] and dice[i+2][0] == dice[i+2][1]:
        found = True
        break

if found:
    print("Yes")
else:
    print("No")