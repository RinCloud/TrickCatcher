def search(lst):
    # create a dictionary to store the frequency of each integer in the list
    frequency = {}
    
    # iterate through the list and update the frequency dictionary
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    
    # iterate through the frequency dictionary and find the greatest integer
    # that has a frequency greater than or equal to the value of the integer itself
    result = -1
    for num, freq in frequency.items():
        if freq >= num and num > result:
            result = num
    
    return result