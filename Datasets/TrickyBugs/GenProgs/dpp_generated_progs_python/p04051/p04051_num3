n = int(input())
packs = []
for _ in range(n):
    a, b = map(int, input().split())
    packs.append((a, b))

total_ways = 0
for i in range(n):
    for j in range(i+1, n):
        ways = (packs[i][0] + packs[i][1] + 1) * (packs[j][0] + packs[j][1] + 1)
        total_ways += ways

print(total_ways % (10**9 + 7))