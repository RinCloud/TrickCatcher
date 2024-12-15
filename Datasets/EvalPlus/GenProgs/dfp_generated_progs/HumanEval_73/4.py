def smallest_change(arr):
    changes = 0
    for i in range(len(arr)//2):
        if arr[i] != arr[len(arr)-i-1]:
            changes += 1
    return changes