import itertools

def count_bag_selections(N, P, A):
    count = 0
    for r in range(N + 1):
        for combination in itertools.combinations(A, r):
            if sum(combination) % 2 == P:
                count += 1
    return count

N, P = map(int, input().split())
A = list(map(int, input().split()))

result = count_bag_selections(N, P, A)
print(result)