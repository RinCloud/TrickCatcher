n, m, x = map(int, input().split())

Book = [[int(x) for x in input().split()] for j in range(n)]
Cost = 10 ** 7
for i in range(2**n):
  bag = [0 for k in range(n+1)]
 
  for j in range(n):
    if ((i >> j) &1):
      bag = [ x + y for (x,y) in zip (bag,Book[j])]
  if all(b >= x for b in bag[1:]):
    if Cost >= bag[0]:
      Cost = bag[0]
if Cost != 10 ** 7:
  print(Cost)
else:
  print(-1)