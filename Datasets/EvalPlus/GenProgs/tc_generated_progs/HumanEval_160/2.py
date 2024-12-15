def do_algebra(operator, operand):
    l_operand = len(operand)
    l_operator = len(operator)
    s = ''
    for i in range(l_operator):
        if i == 0:
            s += str(operand[0]) + operator[i]
        else:
            s += str(operand[i]) + operator[i]
    return eval(s)