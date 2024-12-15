from collections import Counter

def is_palindrome(s):
    return s == s[::-1]

def get_min_cost(N, strings):
    costs = []
    for s, c in strings:
        if is_palindrome(s):
            costs.append(c)

    if not costs:
        return -1

    min_cost = float('inf')

    c_count = Counter(costs)
    for c, count in c_count.items():
        if count % 2 == 0:
            min_cost = min(min_cost, c * (count // 2))
        else:
            min_cost = min(min_cost, c * (count // 2) + c)

    return min_cost

N = int(input())
strings = []
for _ in range(N):
    s, c = input().split()
    strings.append((s, int(c)))

print(get_min_cost(N, strings))