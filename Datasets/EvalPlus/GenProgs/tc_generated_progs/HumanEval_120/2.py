def maximum(arr, k):
    if k == 0: return []
    if k == 1: return [max(arr)]
    if k == len(arr): return sorted(arr, reverse=True)[:k]
    arr.sort()
    kth = arr[len(arr) - k]
    return [x for x in arr if x >= kth]