def can_arrange(arr):
    index = -1
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            index = i
            break
    return index