'''
# Read input from Standard Input
n = int(input())
arr = list(map(int, input().split()))

# Initialize counter and result variables
count = 1
result = 1

for i in range(1, n):
    # Check if the current number is equal to the previous number
    if arr[i] == arr[i-1]:
        continue
    # Check if the current number is greater than the previous number
    elif arr[i] > arr[i-1]:
        # If the previous series was decreasing, start a new series
        if count < 0:
            result += 1
        count = 1
    # Check if the current number is smaller than the previous number
    else:
        # If the previous series was increasing, start a new series
        if count > 0:
            result += 1
        count = -1

print(result)
'''
