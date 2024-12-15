def do_algebra(operator, operand):
    expression = operand[0]
    for i in range(len(operator)):
        if operator[i] == '+':
            expression += operand[i+1]
        elif operator[i] == '-':
            expression -= operand[i+1]
        elif operator[i] == '*':
            expression *= operand[i+1]
        elif operator[i] == '//':
            expression //= operand[i+1]
        elif operator[i] == '**':
            expression **= operand[i+1]
    
    return expression