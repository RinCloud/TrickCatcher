import re

s = input()

if re.fullmatch('(dream(er)?|erase(r)?)*', s):
    print('YES')
else:
    print('NO')
