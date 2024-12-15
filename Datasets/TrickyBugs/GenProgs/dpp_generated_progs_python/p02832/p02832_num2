def satisfy_snuke(N, bricks):
    positions = [0] * N
    for i in range(N):
        if bricks[i] <= N:
            positions[bricks[i]-1] += 1
    for i in range(N):
        if positions[i] != 1:
            return -1
    bricks_broken = N - max(positions)
    return bricks_broken
        

N = int(input())
bricks = list(map(int, input().split()))
result = satisfy_snuke(N, bricks)
print(result)