import sys
input = sys.stdin.readline
W, H, N = map(int, input().split())
table = [set() for _ in range(H + 1)]
qs = []
for _ in range(N):
  x, y = map(int, input().split())
  table[y - 1].add(x - 1)
  if x < y: qs.append((x - 1, y - 1))
u, v = 0, 0
while u < W and (v < H):
  u += 1
  v += not (u in table[v + 1])
t = []
for i in range(len(qs)):
  if qs[i][1] <= v: t.append(qs[i])
qs = t
def check(x, y):
  u, v = 0, 0
  while u <= x:
    if (u + 1) in table[v]: return True
    u += 1
    if v < y: v += not (u in table[v + 1])
  return False

qs.sort(key = lambda x: x[0])
ng = -1
ok = len(qs)
while ok - ng > 1:
  m = (ok + ng) // 2
  if check(qs[m][0], qs[m][1]): ok = m
  else: ng = m
#print(ok, ng, qs)
#print(table)
if ok == len(qs): print(W)
else:
  x, y = qs[ok]
  u, v = 0, 0
  res = 0
  stop = 0
  while True:
    if (u + 1) in table[v]:
      stop += 1
    else:
      u += 1
      stop = 0
    res += 1
    if stop > 1: break
    if v >= y or (u in table[v + 1]) or (stop > 0): stop += 1
    else:
      v += 1
      stop = 0
    if stop > 1: break
  print(res)