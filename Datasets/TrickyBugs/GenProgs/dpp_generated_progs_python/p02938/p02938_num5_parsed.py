L, R = map(int, input().split())

MOD = 10**9 + 7

count = 0

for x in range(L, R+1):
    for y in range(x, R+1):
        if y % x == (y ^ x):
            count += 1

print(count % MOD)