def maximum(arr, k):
    if k == 0:
        return []
    if k == 1:
        return [max(arr)]
    if k == len(arr):
        return sorted(arr)
    # sort the array
    arr.sort()
    # find the kth largest element
    kth = arr[len(arr) - k]
    # find the k largest elements
    return [x for x in arr if x >= kth]