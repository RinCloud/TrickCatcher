import itertools

N, M = map(int, input().split())
A = list(map(int, input().split()))

MOD = int(1e9 + 7)

# Generating all possible permutations
permutations = list(itertools.permutations(range(1, 2**N + 1)))

count = 0

# Checking each permutation
for permutation in permutations:
    winner = 1

    # Playing the matches
    while len(permutation) > 1:
        matches = []
        i = 0
        while i < len(permutation):
            matches.append((permutation[i], permutation[i + 1]))
            i += 2

        new_permutation = []
        for match in matches:
            if match[1] in A:
                winner = match[1]
                break

            new_permutation.append(match[0])

        permutation = new_permutation

    # Counting the permutations where Player 1 is the champion
    if winner == 1:
        count += 1

print(count % MOD)