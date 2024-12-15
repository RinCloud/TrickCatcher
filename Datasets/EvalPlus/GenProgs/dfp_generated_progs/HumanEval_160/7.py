def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operand)-1):
        expression += str(operand[i]) + " " + operator[i] + " "
    expression += str(operand[-1])
    return eval(expression)