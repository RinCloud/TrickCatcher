def sort_even(l: list):
    even_list = l[::2]  # Get the even-indexed values
    sorted_even_list = sorted(even_list)  # Sort the even-indexed values
    sorted_list = []  # Initialize an empty list to store the sorted values
    for i in range(len(l)):
        if i % 2 == 0:
            sorted_list.append(sorted_even_list.pop(0))  # Add the sorted even-indexed values
        else:
            sorted_list.append(l[i])  # Add the odd-indexed values
    return sorted_list