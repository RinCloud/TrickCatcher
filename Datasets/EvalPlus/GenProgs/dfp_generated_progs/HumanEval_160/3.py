def do_algebra(operator, operand):
    expression = str(operand[0])
    for i in range(len(operator)):
        expression += operator[i] + str(operand[i + 1])
    result = eval(expression)
    return result