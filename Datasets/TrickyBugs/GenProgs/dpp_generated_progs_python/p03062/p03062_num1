"""
def max_value(N, A):
    count_neg = 0
    sum_vals = 0
    min_abs = float('inf')
    
    for i in range(N):
        sum_vals += abs(A[i])
        if A[i] < 0:
            count_neg += 1
        min_abs = min(min_abs, abs(A[i]))
    
    if count_neg % 2 == 0:
        return sum_vals
    else:
        return sum_vals - 2 * min_abs

N = int(input())
A = list(map(int, input().split()))

print(max_value(N, A))
"""