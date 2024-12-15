**REPAIRED CODE**:

import re

string = input()

if re.match('(dream(er)?|erase(r)?)*$', string):
    print('YES')
else:
    print('NO')