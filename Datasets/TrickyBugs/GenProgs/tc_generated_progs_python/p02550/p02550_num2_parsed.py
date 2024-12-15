**Repaired Code**:

n,x,m = map(int,input().split())
ans = 0
al = set([x])
for i in range(n):
  ans += x
  x = (x**2)%m
  if x==0:
    break
  if x in al:
    ind = list(al).index(x)
    loop = i-ind+1
    l = list(al)
    
    # When n is smaller than the loop length
    if n - i - 1 < loop:
        ans += sum(l[ind:i+1])
        for j in range(n - i - 1):
            ans += l[ind + j]
        break
    
    # When n is larger or equal to the loop length
    ans += sum(l[ind:i+1]) * ((n - i - 1) // loop)
    for j in range((n - i - 1) % loop):
        ans += l[ind + j]
    break
    
  al.add(x)
print(ans)