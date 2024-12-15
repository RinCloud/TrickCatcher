s = input()

stack = []
for c in s:
    if c == '0':
        stack.append('0')
    elif c == '1':
        stack.append('1')
    elif c == 'B':
        if stack:
            stack.pop()

print(''.join(stack))