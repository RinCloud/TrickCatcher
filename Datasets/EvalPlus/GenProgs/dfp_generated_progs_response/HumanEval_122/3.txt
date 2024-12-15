def add_elements(arr, k):
    """
    Given a non-empty array of integers arr and an integer k, return
    the sum of the elements with at most two digits from the first k elements of arr.
    """
    sum = 0
    for i in range(k):
        if arr[i] < 100:
            sum += arr[i]
    return sum