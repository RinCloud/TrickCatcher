A,B,C=list(input()),list(input()),list(input())
Q=[A,B,C]
i=["a","b","c"]
k=A[0]
while(True):
  j=i.index(k)
  if len(Q[j])==0:
    print(k.upper())
    exit()
  k=Q[j][0]
  Q[j]=Q[j][1:]