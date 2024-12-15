def iscube(a):
    if a == 0:
        return True
    
    abs_a = abs(a)
    cube_root = abs_a ** (1/3)
    round_cube_root = round(cube_root)
    
    return round_cube_root ** 3 == abs_a