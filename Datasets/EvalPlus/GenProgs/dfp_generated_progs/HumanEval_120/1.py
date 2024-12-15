def maximum(arr, k):
    arr.sort(reverse=True)
    return arr[:k]