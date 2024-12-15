from collections import defaultdict

# Read input
N = int(input())
strings = []
costs = []
for _ in range(N):
    s, c = input().split()
    strings.append(s)
    costs.append(int(c))

# Determine all possible palindromes
palindromes = []
for s in strings:
    if s == s[::-1]:
        palindromes.append((s, costs[strings.index(s)]))
    for s2 in strings:
        if len(s) == len(s2) and s == s2[::-1]:
            palindromes.append((s + s2, costs[strings.index(s)] + costs[strings.index(s2)]))

# Store the minimum cost to form a palindrome at each length
min_costs = defaultdict(lambda: float('inf'))

# Base case
min_costs[''] = 0

# Dynamic programming
for p in palindromes:
    s, cost = p
    for i in range(len(s) + 1):
        min_costs[s[:i]] = min(min_costs[s[:i]], cost)

# Calculate minimum total cost
total_cost = float('inf')
for s in strings:
    if s == s[::-1]:
        total_cost = min(total_cost, costs[strings.index(s)])
    for i in range(1, len(s) + 1):
        if s[i:] == s[i:][::-1]:
            total_cost = min(total_cost, min_costs[s[:i]] + costs[strings.index(s)])

# Print the minimum total cost or -1 if no palindrome is possible
print(total_cost if total_cost != float('inf') else -1)