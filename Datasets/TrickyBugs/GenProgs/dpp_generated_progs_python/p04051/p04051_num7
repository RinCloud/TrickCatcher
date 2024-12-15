n = int(input())
packs = []
for _ in range(n):
    a, b = map(int, input().split())
    packs.append((a,b))

MOD = 10**9 + 7

skewer_ways = 0
beef_ways = 0
pepper_ways = 0

for a, b in packs:
    skewer_ways += pow(2, a, MOD) - 1
    beef_ways += pow(2, b, MOD) - 1
    pepper_ways += pow(2, a+b, MOD) - (pow(2, a, MOD) - 1) - (pow(2, b, MOD) - 1)

total_ways = pow(2, n, MOD) - 1
total_ways -= skewer_ways
total_ways -= beef_ways
total_ways += pepper_ways

total_ways %= MOD

print(total_ways)