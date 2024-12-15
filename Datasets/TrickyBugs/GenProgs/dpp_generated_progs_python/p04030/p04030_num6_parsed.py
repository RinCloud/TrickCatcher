s = input()

stack = []
for char in s:
  if char == '0':
    stack.append('0')
  elif char == '1':
    stack.append('1')
  elif char == 'B' and stack:
    stack.pop()

result = ''.join(stack)
print(result)