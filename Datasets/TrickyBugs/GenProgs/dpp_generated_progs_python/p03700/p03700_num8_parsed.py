def min_explosions(N, A, B, h):
    explosions = 0
    for monster in h:
        if monster <= B:
            continue
        monster -= B
        explosions += 1
        if monster <= A:
            continue
        num_explosions = monster // A
        explosions += num_explosions
        remainder = monster % A
        if remainder > 0:
            explosions += 1
    return explosions

# Read input
N, A, B = map(int, input().split())
h = []
for _ in range(N):
    h.append(int(input()))

# Calculate minimum explosions
answer = min_explosions(N, A, B, h)

# Print output
print(answer)