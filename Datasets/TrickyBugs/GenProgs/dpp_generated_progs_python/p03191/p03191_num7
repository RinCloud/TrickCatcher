MOD = 10**9 + 7

def solve(N, A):
    count = 0
    for i in range(2**N):
        perm = [p for p in range(1, 2*N+1)]
        for j in range(N):
            if A[j] != -1:
                perm.remove(A[j])
            elif (i >> j) & 1:
                perm.remove(A[2*N-j-1])
            else:
                perm.remove(A[j+1])
        if sorted(perm[:N]) == perm[:N]:
            count += 1
    return count % MOD

N = int(input())
A = list(map(int, input().split()))
print(solve(N, A))