# Program

def can_obtain_string(s):
    while len(s) > 0:
        if s.endswith('dream'):
            s = s[:-5]
        elif s.endswith('dreamer'):
            s = s[:-7]
        elif s.endswith('erase'):
            s = s[:-5]
        elif s.endswith('eraser'):
            s = s[:-6]
        else:
            return 'NO'
    return 'YES'

s = input()
result = can_obtain_string(s)
print(result)