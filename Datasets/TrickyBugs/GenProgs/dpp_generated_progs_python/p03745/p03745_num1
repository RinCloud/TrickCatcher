# Program:

def min_subarrays(N, A):
    cnt = 1
    for i in range(1, N):
        if A[i] < A[i-1]:
            cnt += 1
    return cnt

N = int(input())
A = list(map(int, input().split()))

result = min_subarrays(N, A)
print(result)