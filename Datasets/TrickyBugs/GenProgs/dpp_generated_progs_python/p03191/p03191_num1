from itertools import permutations
from collections import defaultdict

def count_sequences(N, A):
    mod = 10**9 + 7
    count = 0
    num_pos = A.count(-1)
    perms = list(permutations(range(1, 2*N+1)))
    
    for perm in perms:
        valid = True
        for i in range(2*N):
            if A[i] != -1:
                if perm[i] != A[i]:
                    valid = False
                    break
        if valid:
            seq = []
            idx = 0
            for i in range(N):
                seq.append(min(perm[idx], perm[idx+1]))
                idx += 2
            count += 1
    return count % mod


# parsing input
N = int(input())
A = list(map(int, input().split()))

# count sequences
result = count_sequences(N, A)
print(result)