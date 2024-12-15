def search(lst):
    frequency = {}
    # Count the frequency of each number in the list
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    
    # Find the greatest integer with frequency greater than or equal to itself
    greatest_integer = -1
    for num, freq in frequency.items():
        if freq >= num and num > greatest_integer:
            greatest_integer = num
    
    return greatest_integer