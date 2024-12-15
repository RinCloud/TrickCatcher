import sys

def solve(N, M, A, operations):
    max_sum = sum(A)
    for b, c in operations:
        diff = max(max_sum - sum(sorted(A)[:b]), 0)
        max_sum += diff
    return max_sum

if __name__ == '__main__':
    N, M = map(int, sys.stdin.readline().split())
    A = list(map(int, sys.stdin.readline().split()))
    operations = [list(map(int, sys.stdin.readline().split())) for _ in range(M)]
    result = solve(N, M, A, operations)
    print(result)