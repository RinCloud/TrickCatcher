def min_subarrays(N, A):
    cnt = 1
    for i in range(1, N):
        if A[i] > A[i - 1]:
            increasing = True
        elif A[i] < A[i - 1]:
            increasing = False
        else:
            continue
        for j in range(i, N):
            if (A[j] > A[j - 1] and not increasing) or (A[j] < A[j - 1] and increasing):
                break
            increasing = not increasing
            if j == N - 1:
                cnt += 1
    return cnt

N = int(input())
A = list(map(int, input().split()))

result = min_subarrays(N, A)
print(result)