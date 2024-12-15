def min_num_subarrays(N, A):
    count = 1
    prev_diff = A[1] - A[0]
    
    for i in range(1, N):
        curr_diff = A[i] - A[i-1]
        
        if curr_diff * prev_diff < 0:
            count += 1
        
        prev_diff = curr_diff
    
    return count

N = int(input())
A = list(map(int, input().split()))

result = min_num_subarrays(N, A)
print(result)