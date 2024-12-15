import sys

def solve(N, A):
    # calculate the maximum value for each K
    ans = []
    for K in range(1, 2**N):
        max_value = 0
        for i in range(0, K):
            for j in range(i+1, K):
                value = A[i] + A[j]
                if value > max_value:
                    max_value = value
        ans.append(max_value)
    return ans

# read input from standard input
N = int(input())
A = list(map(int, input().split()))

# solve the problem
result = solve(N, A)

# print the result
for ans in result:
    print(ans)