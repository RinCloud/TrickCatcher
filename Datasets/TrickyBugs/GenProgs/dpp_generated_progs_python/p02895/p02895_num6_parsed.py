from itertools import combinations

N = int(input())
A = [input() for _ in range(2*N)]

def is_valid(pair):
    for i in range(len(pair)):
        for j in range(i+1, len(pair)):
            if A[pair[i]][pair[j]] == '0' or A[pair[j]][pair[i]] == '0':
                return False
    return True

def count_pairs():
    num_pairs = 0
    for pair in combinations(range(2*N), 2):
        if is_valid(pair):
            num_pairs += 1
    return num_pairs

num_ways = count_pairs() // N
print(num_ways)