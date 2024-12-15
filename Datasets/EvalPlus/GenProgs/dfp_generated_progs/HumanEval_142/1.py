def sum_squares(lst):
    square_lst = [num**2 if i%3 == 0 else num for i, num in enumerate(lst)]
    cube_lst = [num**3 if i%4 == 0 and i%3 != 0 else num for i, num in enumerate(square_lst)]
    return sum(cube_lst)