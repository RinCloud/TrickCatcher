import re
S_ = input()
T = input()
Tr = T[::-1]
Sr = S_[::-1]
reg = "".join(map(lambda x: "[{}?]".format(x), Tr))
ans = re.sub(reg, Tr, Sr, count=1)
if Tr not in ans:
    print("UNRESTORABLE")
else:
    res = ans.replace("?", "a")[::-1]
    start = ans.index(Tr) + len(Tr)
    end = start + S_.index('?')
    res = res[:end] + S_[end:].replace('?', 'a')[::-1]
    print(res)
