from itertools import combinations

def is_valid_pair(pair, A):
    p, q = pair
    return A[p-1][q-1] == 1 and A[q-1][p-1] == 1

def is_valid_division(division, A):
    for pair in division:
        if not is_valid_pair(pair, A):
            return False
    return True

def count_valid_divisions(N, A):
    pairs = list(combinations(range(1, 2*N+1), 2))
    valid_divisions = []
    for division in combinations(pairs, N):
        if is_valid_division(division, A):
            valid_divisions.append(division)
    return len(valid_divisions)

# Read input
N = int(input())
A = []
for _ in range(2*N):
    A.append(list(map(int, input().strip())))

# Count valid divisions
answer = count_valid_divisions(N, A)

# Print answer
print(answer)