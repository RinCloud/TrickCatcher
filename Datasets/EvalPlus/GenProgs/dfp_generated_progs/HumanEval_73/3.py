def smallest_change(arr):
    left = 0
    right = len(arr) - 1
    count = 0
    
    while left < right:
        if arr[left] != arr[right]:
            count += 1
        left += 1
        right -= 1
    
    return count