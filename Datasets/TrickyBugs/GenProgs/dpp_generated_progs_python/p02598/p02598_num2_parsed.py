from math import ceil

def possible_max_length(n, k, logs):
    # Sort the logs in descending order
    logs.sort(reverse=True)
    
    # Initialize the left and right pointers
    left = 0
    right = logs[0] + 1
    
    while left < right:
        mid = (left + right) // 2
        
        # Count the number of cuts required
        cuts = 0
        for log in logs:
            if log > mid:
                cuts += ceil(log / mid) - 1
                
        # Check if the number of cuts is within the limit
        if cuts <= k:
            right = mid
        else:
            left = mid + 1
    
    return left


# Read the input
n, k = map(int, input().split())
logs = list(map(int, input().split()))

# Find the shortest possible length of the longest log
shortest_length = possible_max_length(n, k, logs)

# Print the result
print(shortest_length)