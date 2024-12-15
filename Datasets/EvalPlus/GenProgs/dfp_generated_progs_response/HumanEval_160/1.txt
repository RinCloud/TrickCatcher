def do_algebra(operator, operand):
    expression = str(operand[0])
    for i in range(1, len(operand)):
        expression += operator[i-1] + str(operand[i])
    result = eval(expression)
    return result