# Reading input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Binary search
low = 0
high = max(A)

while low < high:
    mid = (low + high + 1) // 2
    cuts = sum((log - 1) // mid for log in A)
    
    if cuts <= K:
        high = mid - 1
    else:
        low = mid

# Printing the result
print(low + 1)