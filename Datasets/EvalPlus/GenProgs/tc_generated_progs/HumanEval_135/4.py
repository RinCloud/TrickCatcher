def can_arrange(arr):
    if not arr:
        return -1
    max_index = -1
    for i in range(1, len(arr)):
        if arr[i] <= arr[i - 1]: # changed from arr[i] < arr[i - 1] to arr[i] <= arr[i - 1]
            max_index = i
    return max_index