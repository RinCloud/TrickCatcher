def iscube(a):
    # find the cube root of a
    cube_root = round(a ** (1/3))
    
    # check if cube_root cubed is equal to a
    if cube_root ** 3 == a:
        return True
    else:
        return False