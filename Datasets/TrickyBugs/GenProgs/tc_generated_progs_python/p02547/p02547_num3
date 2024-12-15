n = int(input())
doublets = []
for _ in range(n):
    doublets.append(tuple(map(int, input().split())))

found = False
for i in range(n - 2):
    if doublets[i][0] == doublets[i][1] and doublets[i + 1][0] == doublets[i + 1][1] and doublets[i + 2][0] == doublets[i + 2][1]:
        found = True
        break

if found:
    print("Yes")
else:
    print("No")