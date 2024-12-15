P = [start]
for d in D:
  a = P[-1]
  b = abs(a-d)
  P.append(min(a,b))
