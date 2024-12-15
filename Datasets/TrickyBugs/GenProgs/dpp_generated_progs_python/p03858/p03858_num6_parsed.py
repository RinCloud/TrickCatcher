def count_pinholes(N, a, b, pinholes):
    compass_pairs = set()

    for i in range(N-1):
        for j in range(i+1, N):
            if (pinholes[a-1][0] - pinholes[j][0] == pinholes[a-1][0] - pinholes[b-1][0]
            or pinholes[a-1][0] - pinholes[j][0] == pinholes[a-1][0] - pinholes[b-1][0]):

                compass_pairs.add((i, j))

    return len(compass_pairs)

# Read input
N, a, b = map(int, input().split())
pinholes = []

for _ in range(N):
    x, y = map(int, input().split())
    pinholes.append((x, y))

# Calculate and print the result
result = count_pinholes(N, a, b, pinholes)
print(result)