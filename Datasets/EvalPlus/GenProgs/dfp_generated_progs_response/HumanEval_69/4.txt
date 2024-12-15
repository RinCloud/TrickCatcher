def search(lst):
    # Create a frequency dictionary to store the frequency of each number
    freq_dict = {}
    
    # Iterate through the list and count the frequency of each number
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    
    # Iterate through the frequency dictionary to find the greatest integer that satisfies the conditions
    greatest_integer = -1
    for num, freq in freq_dict.items():
        if freq >= num and num > greatest_integer:
            greatest_integer = num
    
    return greatest_integer