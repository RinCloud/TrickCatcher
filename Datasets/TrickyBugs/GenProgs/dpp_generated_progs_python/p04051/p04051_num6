N = int(input())
packs = [list(map(int, input().split())) for _ in range(N)]

MOD = 10**9 + 7

ways = 0

for i in range(N):
    for j in range(i + 1, N):
        skewers = 2
        beef = packs[i][0] + packs[j][0]
        pepper = packs[i][1] + packs[j][1]
        
        total_ways = (skewers * pow(2, beef, MOD) * pow(2, pepper, MOD)) % MOD
        ways = (ways + total_ways) % MOD

print(ways)