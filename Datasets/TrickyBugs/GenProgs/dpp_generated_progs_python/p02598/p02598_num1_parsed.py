import math

# Input
N, K = map(int, input().split())
logs = list(map(int, input().split()))

# Sort logs in decreasing order
logs.sort(reverse=True)

# Initialize maximum length to length of longest log
max_length = logs[0]

# Iterate over sorted logs
for i in range(N):
    # Calculate number of cuts needed
    cuts = math.ceil((logs[i] - max_length) / 2)
    
    # Subtract number of cuts from available cuts
    K -= cuts
    
    # If total cuts become negative, break
    if K < 0:
        break
    
    # Update maximum length
    max_length = logs[i]

# Output
print(math.ceil(max_length))
