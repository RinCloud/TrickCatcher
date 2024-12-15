def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            if num not in freq:
                freq[num] = 1
            else:
                freq[num] += 1
    
    max_freq = -1
    for num in freq:
        if freq[num] >= num:
            max_freq = max(max_freq, num)
    
    return max_freq if max_freq != -1 else -1