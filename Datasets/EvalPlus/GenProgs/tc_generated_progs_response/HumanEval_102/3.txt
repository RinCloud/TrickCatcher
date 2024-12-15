def choose_num(x, y):
    even = False
    
    if x % 2 == 0 or y % 2 == 0:
        even = True
    
    while x <= y:
        if even:
            if y % 2 == 0:
                return y
            else:
                y -= 1
        else:
            if x % 2 == 0:
                return x
            else:
                x += 1
    
    return -1