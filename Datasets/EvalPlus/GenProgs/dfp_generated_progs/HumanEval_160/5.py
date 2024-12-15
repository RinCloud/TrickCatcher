def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operand)):
        expression += str(operand[i])
        if i < len(operator):
            expression += operator[i]
    return eval(expression)