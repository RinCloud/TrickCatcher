def maximum(arr, k):
    if k == 0: 
        return []
    if k == 1: 
        return [max(arr)]
    if k == len(arr): 
        return sorted(arr)
    
    # sort the array in descending order
    arr.sort(reverse=True)
    
    # return the first k elements in the sorted array
    return arr[:k]