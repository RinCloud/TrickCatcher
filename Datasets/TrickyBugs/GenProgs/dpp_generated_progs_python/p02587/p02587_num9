from collections import defaultdict

def is_palindrome(s):
    return s == s[::-1]

def find_min_cost(N, strings):
    min_cost = float('inf')
    string_counts = defaultdict(int)
    string_costs = defaultdict(int)
    total_cost = 0
    
    for s, c in strings:
        string_counts[s] += 1
        string_costs[s] = c
        total_cost += c
    
    for s, count in string_counts.items():
        if count >= 2:
            if is_palindrome(s):
                min_cost = min(min_cost, string_costs[s] * count)
        for i in range(1, count):
            for j in range(i, count):
                concat_string = s * i + s[::-1] * (j - i) + s * (count - j)
                if is_palindrome(concat_string):
                    min_cost = min(min_cost, string_costs[s] * i + string_costs[s] * (j - i))
    
    if min_cost == float('inf'):
        return -1
    return min_cost

N = int(input())
strings = []
for _ in range(N):
    s, c = input().split()
    strings.append((s, int(c)))

print(find_min_cost(N, strings))