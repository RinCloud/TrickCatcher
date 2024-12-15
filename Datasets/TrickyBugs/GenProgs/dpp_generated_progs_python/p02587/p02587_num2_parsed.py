from sys import maxsize

def is_palindrome(s):
    return s == s[::-1]

def find_min_cost(N, strings):
    min_cost = maxsize

    for i in range(1 << N):
        left = []
        right = []

        for j in range(N):
            if (i & (1 << j)) > 0:
                left.append(strings[j])
            else:
                right.append(strings[j])

        if is_palindrome(''.join(left)):
            cost = sum([s[1] for s in left]) + sum([s[1] for s in right])
            min_cost = min(min_cost, cost)

    return min_cost if min_cost != maxsize else -1

# Reading input
N = int(input())
strings = []
for _ in range(N):
    s, c = input().split()
    strings.append((s, int(c)))

# Finding minimum cost
min_cost = find_min_cost(N, strings)

# Printing output
print(min_cost)