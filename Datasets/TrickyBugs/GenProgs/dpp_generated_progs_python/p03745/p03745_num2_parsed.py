# Python program to find the minimum number of subarrays to divide an array

def find_min_subarrays(n, arr):
    # Initializing the count and is_increasing variables
    count = 1
    is_increasing = arr[1] > arr[0]
    
    # Looping through the array to find the minimum number of subarrays
    for i in range(1, n):
        # Checking if the current element maintains the increasing or decreasing order
        if (arr[i] > arr[i-1]) != is_increasing:
            count += 1
            is_increasing = not is_increasing
    
    # Returning the minimum number of subarrays
    return count

# Getting the input values
n = int(input())
arr = list(map(int, input().split()))

# Calling the function and printing the result
print(find_min_subarrays(n, arr))