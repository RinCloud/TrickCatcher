def fruit_distribution(s, n):
    """
    In this task, you will be given a string that represents a number of apples and oranges 
    that are distributed in a basket of fruit this basket contains 
    apples, oranges, and mango fruits. Given the string that represents the total number of 
    the oranges and apples and an integer that represent the total number of the fruits 
    in the basket return the number of the mango fruits in the basket.
    """
    # split the input string into a list of individual words
    s_lst = s.split()
    # initialize variables to keep track of the number of apples, oranges, and mangoes
    num_apples = 0
    num_oranges = 0
    num_mangoes = 0
    # iterate through the list of words
    for word in s_lst:
        # if the word is "apples", get the number of apples by converting the previous word to an integer
        if word == "apples":
            num_apples = int(s_lst[s_lst.index(word) - 1])
        # if the word is "oranges", get the number of oranges by converting the previous word to an integer
        elif word == "oranges":
            num_oranges = int(s_lst[s_lst.index(word) - 1])
    # calculate the number of mangoes by subtracting the number of apples and oranges from the total number of fruits
    num_mangoes = n - num_apples - num_oranges
    return num_mangoes