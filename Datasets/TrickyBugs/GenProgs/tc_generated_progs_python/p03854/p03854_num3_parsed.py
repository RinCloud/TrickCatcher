import re

def obtain_string(S):
    if re.match('(dreame*|erase|r)*$', S):
        return 'YES'
    else:
        return 'NO'
