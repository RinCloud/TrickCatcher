def solve(N, M, X, C, A):
    ans = float('inf')

    for mask in range(1 << N):
        cost = 0
        skills = [0] * M

        for i in range(N):
            if (mask >> i) & 1:
                cost += C[i]
                for j in range(M):
                    skills[j] += A[i][j]

        if all(skill >= X for skill in skills):
            ans = min(ans, cost)

    return ans if ans != float('inf') else -1


if __name__ == '__main__':
    N, M, X = map(int, input().split())
    C = []
    A = []

    for _ in range(N):
        temp = list(map(int, input().split()))
        C.append(temp[0])
        A.append(temp[1:])

    print(solve(N, M, X, C, A))
