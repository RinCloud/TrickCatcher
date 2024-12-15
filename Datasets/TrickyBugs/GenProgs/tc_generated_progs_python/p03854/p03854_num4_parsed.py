import re

S = input()

if re.match('(dreame*|erase|r)*$', S):
    print('YES')
else:
    print('NO')
