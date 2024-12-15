def sort_array(arr):
    length = len(arr)
    bins = [[] for _ in range(length + 1)]
    for num in arr:
        bins[bin(num).count("1")].append(num)
    return [x for y in bins for x in sorted(y)]