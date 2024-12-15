def solve(N, A):
    count_dict = {}
    for i in range(N):
        if A[i] in count_dict:
            count_dict[A[i]] += 1
        else:
            count_dict[A[i]] = 1

    for k in range(N):
        ans = 0
        for i in range(N):
            if i != k:
                ans += count_dict[A[i]]
        ans = ans - (N - 1)
        print(ans)

# Getting input from standard input
N = int(input())
A = list(map(int, input().split()))

# Calling the solve function
solve(N, A)