def search(lst):
    freq_dict = {}  # dictionary to store the frequency of each integer
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    
    max_freq = 0  # maximum frequency of any integer
    max_freq_num = 0  # integer with the maximum frequency
    
    for num in freq_dict:
        if freq_dict[num] >= num:  # check if frequency is greater than or equal to the integer itself
            if freq_dict[num] > max_freq:
                max_freq = freq_dict[num]
                max_freq_num = num
                
    if max_freq > 0:  # if there is an integer with the required frequency
        return max_freq_num
    else:
        return -1