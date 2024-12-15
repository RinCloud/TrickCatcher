def do_algebra(operator, operand):
    l_operator = len(operator)
    s = str(operand[0])
    
    for i in range(l_operator):
        s += operator[i] + str(operand[i + 1])
    
    return eval(s)