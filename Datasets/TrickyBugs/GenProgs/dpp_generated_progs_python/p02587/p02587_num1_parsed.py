from collections import defaultdict

def is_palindrome(s):
    return s == s[::-1]

def min_cost_to_make_palindrome(N, strings):
    costs = defaultdict(int)
    for s, c in strings:
        costs[s] = max(costs[s], c)
    
    min_cost = float('inf')
    
    for s1 in strings:
        if is_palindrome(s1):
            min_cost = min(min_cost, costs[s1])
            continue
        
        for s2 in strings:
            new_string = s1 + s2
            if is_palindrome(new_string):
                min_cost = min(min_cost, costs[s1] + costs[s2])
    
    return min_cost if min_cost != float('inf') else -1

N = int(input())
strings = []

for _ in range(N):
    s, c = input().split()
    strings.append((s, int(c)))

print(min_cost_to_make_palindrome(N, strings))