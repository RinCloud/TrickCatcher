s = input()

editor = []
for key in s:
    if key == '0':
        editor.append('0')
    elif key == '1':
        editor.append('1')
    elif key == 'B':
        if editor:
            editor.pop()

print(''.join(editor))