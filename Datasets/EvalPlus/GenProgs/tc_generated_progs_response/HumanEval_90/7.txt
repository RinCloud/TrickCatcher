def next_smallest(lst):
    if len(lst) < 2:
        return None
    else:
        unique_elements = list(set(lst))
        if len(unique_elements) < 2:
            return None
        else:
            unique_elements.sort()
            return unique_elements[1]