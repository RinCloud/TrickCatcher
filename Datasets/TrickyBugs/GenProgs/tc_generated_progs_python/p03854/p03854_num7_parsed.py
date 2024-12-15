import re

S = input()

if re.fullmatch('(dream|dreamer|erase|eraser)*', S):
    print("YES")
else:
    print("NO")
