from itertools import combinations

def is_palindrome(s):
    return s == s[::-1]

N = int(input())
strings = []
costs = []
for _ in range(N):
    s, c = input().split()
    strings.append(s)
    costs.append(int(c))

min_cost = float('inf')
for r in range(1, N+1):
    for comb in combinations(range(N), r):
        temp_cost = 0
        temp_string = ''
        for i in comb:
            temp_cost += costs[i]
            temp_string += strings[i]
        if is_palindrome(temp_string):
            min_cost = min(min_cost, temp_cost)

if min_cost == float('inf'):
    print(-1)
else:
    print(min_cost)