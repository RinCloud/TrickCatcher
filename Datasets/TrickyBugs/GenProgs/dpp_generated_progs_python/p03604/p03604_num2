from itertools import permutations

N = int(input())
coordinates = []
for _ in range(2*N):
    x, y = map(int, input().split())
    coordinates.append((x, y))

def solve(N, coordinates):
    coordinates.sort()
    count = 0
    for perm in permutations(coordinates):
        valid = True
        for i in range(N):
            if perm[i][0] <= perm[N+i][0] or perm[i][1] >= perm[N+i][1]:
                valid = False
                break
        if valid:
            count += 1
    return count % (10**9 + 7)

print(solve(N, coordinates))