def smallest_change(arr):
    count = 0
    for i in range(len(arr)//2):
        if arr[i] != arr[-(i+1)]:
            count += 1
    return count