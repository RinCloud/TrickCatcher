import collections

def solve_balls_problem(N, A):
    counter = collections.Counter(A)
    ans = []
    for k in range(N):
        num_ways = counter[A[k]] - 1
        ans.append(num_ways)
    return ans

N = int(input())
A = list(map(int, input().split()))

result = solve_balls_problem(N, A)
for ans in result:
    print(ans)