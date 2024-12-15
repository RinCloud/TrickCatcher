N = int(input())
A = list(map(int, input().split()))

MOD = 10**9 + 7

count = [0] * (N + 1)
for a in A:
    count[a] += 1

if N % 2 == 0:
    for i in range(1, N + 1, 2):
        if count[i] != 2:
            print(0)
            exit()
else:
    if count[0] != 1:
        print(0)
        exit()
    for i in range(2, N + 1, 2):
        if count[i] != 2:
            print(0)
            exit()

num_orders = 1
if N % 2 == 0:
    for i in range(1, N + 1, 2):
        num_orders *= count[i]
        num_orders %= MOD
else:
    for i in range(1, N + 1, 2):
        num_orders *= count[i]
        num_orders %= MOD
    num_orders *= N

print(num_orders % MOD)