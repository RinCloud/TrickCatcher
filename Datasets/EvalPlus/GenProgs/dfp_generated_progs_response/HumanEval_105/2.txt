def by_length(arr):
    digits = ['One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine']
    arr = sorted([x for x in arr if 1 <= x <= 9])
    arr = arr[::-1]
    arr = [digits[x-1] for x in arr]
    return arr