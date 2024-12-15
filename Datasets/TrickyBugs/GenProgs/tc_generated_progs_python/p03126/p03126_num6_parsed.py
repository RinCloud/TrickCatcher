n,m=map(int,input().split())
foods=[]
for _ in range(n):
  *b,=map(int,input().split())
  b=b[1:]
  foods.append(set(b))

s = set(range(1, m+1))
for food in foods:
  s = s & food
print(len(s))
