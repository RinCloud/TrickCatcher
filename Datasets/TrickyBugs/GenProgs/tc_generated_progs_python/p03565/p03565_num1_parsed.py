import re

def restore_string(S_, T):
  Tr = T[::-1]
  Sr = S_[::-1]
  reg = "".join(map(lambda x: "[{}?]".format(x), Tr))
  ans = re.sub(reg, Tr, Sr, count=1)
  if ans.count(Tr) == 1:
    return ans.replace("?", "a")[::-1]
  else:
    return "UNRESTORABLE"

S_ = input()
T = input()

print(restore_string(S_, T))