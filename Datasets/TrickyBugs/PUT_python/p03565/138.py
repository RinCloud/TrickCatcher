import re
S_ = input()
T = input()
Tr = T[::-1]
Sr = S_[::-1]
reg = "".join(map(lambda x: "[{}?]".format(x), Tr))
ans = re.sub(reg, Tr, Sr, count=1)
if ans.count(Tr)==1:
    print(ans.replace("?", "a")[::-1])
else:
    print("UNRESTORABLE")