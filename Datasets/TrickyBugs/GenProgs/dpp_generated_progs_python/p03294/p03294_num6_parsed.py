import sys

def solve(N, A):
    max_val = max(A)
    sum_val = sum(A)
    ans = 0
    for i in range(max_val, sum_val * 2):
        cnt = 0
        for j in range(N):
            cnt += i % A[j]
        ans = max(ans, cnt)
    return ans

if __name__ == "__main__":
    N = int(input())
    A = list(map(int, input().split()))
    print(solve(N, A), end="")