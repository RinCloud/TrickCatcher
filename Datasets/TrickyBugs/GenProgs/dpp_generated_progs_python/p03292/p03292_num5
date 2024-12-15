import itertools

def min_total_cost(A):
    tasks = len(A)
    min_cost = float('inf')

    for permutation in itertools.permutations(range(tasks)):
        cost = 0
        for i in range(tasks-1):
            cost += abs(A[permutation[i+1]] - A[permutation[i]])
        min_cost = min(min_cost, cost)

    return min_cost

A = list(map(int, input().split()))
print(min_total_cost(A))