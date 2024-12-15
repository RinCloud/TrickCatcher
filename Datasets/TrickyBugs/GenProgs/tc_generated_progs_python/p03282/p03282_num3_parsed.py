def replace_digits(s):
    new_s = ''
    for digit in s:
        if digit == '2':
            new_s += '22'
        elif digit == '3':
            new_s += '333'
        elif digit == '4':
            new_s += '4444'
        elif digit == '5':
            new_s += '55555'
        elif digit == '6':
            new_s += '666666'
        elif digit == '7':
            new_s += '7777777'
        elif digit == '8':
            new_s += '88888888'
        elif digit == '9':
            new_s += '999999999'
        else:
            new_s += digit
    return new_s

s = input()
k = int(input())

s_new = s
for _ in range(5 * (10 ** 15)):
    s_new = replace_digits(s_new)

print(s_new[k-1])
