from itertools import combinations

def divide_points(N, A):
    pairs = list(combinations(range(2*N), 2))
    count = 0
    for perm in combinations(pairs, N):
        valid = True
        for p, q in perm:
            if A[p][q] == 0 or A[q][p] == 0:
                valid = False
                break
        if valid:
            count += 1
    return count

N = int(input())
A = []
for _ in range(2*N):
    A.append(list(map(int, input())))

print(divide_points(N, A))