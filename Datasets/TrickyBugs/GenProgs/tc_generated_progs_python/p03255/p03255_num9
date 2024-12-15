n,x=map(int,input().split())
line=list(map(int,input().split()))
Sum=[0]
sum=0
for i in range(n):
  sum+=line.pop(0) # fixed the bug, changed line.pop() to line.pop(0) to pick up the element from the beginning of the list
  Sum.append(sum)
Ans=10**18
for k in range(1,n+1): # fixed the bug, added +1 to the range limit to include the upper limit
  p=0
  for i in range(n+k-1//k):
    if i==0:
      if n>=k:
        p+= (Sum[k])*5
      else:
        p+=(Sum[n])*5
        break
    else:
      if n> (k*i +k):
        p+= (Sum[k*i +k]-Sum[k*(i-1) +k])*(2*i +3)
      else:
        p+= (Sum[n]-Sum[k*(i-1) +k])*(2*i +3)
        break
  ans=(n+k)*x + p
  Ans=min(Ans,ans)
print(Ans)