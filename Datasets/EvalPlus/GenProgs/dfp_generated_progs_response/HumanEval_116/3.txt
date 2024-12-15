def sort_array(arr):
    arr = sorted(arr, key=lambda x: (bin(x).count('1'), x))
    return arr