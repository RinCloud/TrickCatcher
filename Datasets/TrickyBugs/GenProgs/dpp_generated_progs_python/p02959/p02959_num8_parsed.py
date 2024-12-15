import sys

def solve(N, A, B):
    ans = 0
    for i in range(N):
        ans += min(A[i], B[i])
        A[i] -= min(A[i], B[i])
        ans += min(A[i+1], B[i])
        A[i+1] -= min(A[i+1], B[i])
    return ans

def main():
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))
    B = list(map(int, sys.stdin.readline().strip().split()))
    ans = solve(N, A, B)
    print(ans)

if __name__ == "__main__":
    main()