def sorted_list_sum(lst):
    lst = [word for word in lst if len(word)%2 == 0]
    lst.sort(key=lambda x: (len(x), x))
    return lst