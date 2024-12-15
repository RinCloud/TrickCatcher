def add(lst):
    x = len(lst)
    ans = 0
    for i in range(1, x, 2):  # Loop through odd indices
        if lst[i] % 2 == 0:  # Check if the element at the current odd index is even
            ans += lst[i]  # Add the even element at the odd index to ans
    return ans