import heapq

def solve(N, a):
    max_a = max(a)
    if a.count(max_a) > 1:
        return 'Impossible'
    
    total = sum(a)
    if total < 2 * (N - 1):
        return 'Impossible'
    
    return 'Possible'


N = int(input())
a = list(map(int, input().split()))
result = solve(N, a)
print(result)