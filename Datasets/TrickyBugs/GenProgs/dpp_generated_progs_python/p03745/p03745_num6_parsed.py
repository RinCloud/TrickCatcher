def min_subarrays(N, A):
    if N <= 1:
        return 1
    
    subarrays = 1
    direction = None
    
    for i in range(1, N):
        if A[i] > A[i-1]:
            if direction == "decreasing":
                subarrays += 1
                direction = None
            elif direction is None:
                direction = "increasing"
        elif A[i] < A[i-1]:
            if direction == "increasing":
                subarrays += 1
                direction = None
            elif direction is None:
                direction = "decreasing"
    
    return subarrays

N = int(input())
A = list(map(int, input().split()))

print(min_subarrays(N, A))