def iscube(a):
    if a == 0:
        return True
    elif a < 0:
        return iscube(-a)
    else:
        for i in range(1, int(abs(a)**(1/3))+1):
            if i**3 == a:
                return True
        return False