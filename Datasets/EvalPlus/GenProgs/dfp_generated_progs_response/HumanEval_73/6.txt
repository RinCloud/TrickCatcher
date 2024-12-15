def smallest_change(arr):
    # Initialize the count variable to keep track of the number of changes needed
    count = 0
    
    # Iterate through the array from the ends towards the middle
    for i in range(len(arr)//2):
        # If the current elements are not equal, increment the count by the absolute difference between them
        if arr[i] != arr[len(arr)-1-i]:
            count += abs(arr[i] - arr[len(arr)-1-i])
    
    # Return the count
    return count