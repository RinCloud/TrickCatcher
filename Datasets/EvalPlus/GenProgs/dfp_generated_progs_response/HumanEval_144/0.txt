def simplify(x, n):
    num1, den1 = x.split("/")
    num2, den2 = n.split("/")
    
    prod = int(num1) * int(num2)
    return prod % int(den1) == 0