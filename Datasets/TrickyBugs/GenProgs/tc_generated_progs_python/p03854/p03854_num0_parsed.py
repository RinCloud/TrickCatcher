import re

S = input()

pattern = '(dream(er)?|erase(r)?)+'
if re.fullmatch(pattern, S):
    print('YES')
else:
    print('NO')
