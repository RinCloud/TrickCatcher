N = int(input())
slimes = list(map(int, input().split()))

spells = 0
for i in range(1, N):
    if slimes[i] == slimes[i-1]:
        slimes[i] = N + 1
        spells += 1

print(spells)