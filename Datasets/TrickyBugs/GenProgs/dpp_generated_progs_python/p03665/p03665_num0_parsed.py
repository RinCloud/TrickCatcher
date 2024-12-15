from itertools import combinations

def select_bags(N, P, A):
    count = 0
    for i in range(N+1):
        for subset in combinations(A, i):
            if sum(subset) % 2 == P:
                count += 1
    return count

N, P = map(int, input().split())
A = list(map(int, input().split()))

result = select_bags(N, P, A)
print(result)