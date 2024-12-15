N,start = map(int,input().split())
D = list(map(int,input().split()))
input()
Q = list(map(int,input().split()))

Q = [(k-1,i) for i,k in enumerate(Q)]
Q.sort(reverse=True)

P = [start]
for d in D:
  a = P[-1]
  b = abs(a-d)
  P.append(min(a,b))

result = [None]*len(Q)

x = start

for i,d in enumerate(D):
  if Q[-1][0] == i:
    result[Q[-1][1]] = P[i] >= x
    Q.pop()
    if not Q:
      break

  if abs(x-d) < x:
    x -= d

for r in result:
  print('YES' if r else 'NO')