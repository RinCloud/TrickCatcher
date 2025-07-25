def count_verdicts(N, verdicts):
    counts = {'AC': 0, 'WA': 0, 'TLE': 0, 'RE': 0}
    for verdict in verdicts:
        counts[verdict] += 1
    return counts

# Read the number of test cases
N = int(input())

# Read the verdicts
verdicts = []
for _ in range(N):
    verdict = input()
    verdicts.append(verdict)

# Count the verdicts
counts = count_verdicts(N, verdicts)

# Print the results
print(f"AC x {counts['AC']}")
print(f"WA x {counts['WA']}")
print(f"TLE x {counts['TLE']}")
print(f"RE x {counts['RE']}")
