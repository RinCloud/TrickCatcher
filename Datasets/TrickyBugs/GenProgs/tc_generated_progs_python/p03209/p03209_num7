n,x=map(int,input().split())
def func(n,x):
  if n==0:  #Changed from n==1 to n==0 as the burger starts from level-0
    return 'BPPPB'[:min(x,5)].count('P')
  else:
    ret=0
    a=2**n+3*(2**n-1)
    if x>=a-n:
      return 2**(n+1)-1
    elif x>a//2:
      return func(n-1,x)+1+func(n-1,x-a//2-1)
    else:
      return func(n-1,x-1)
print(func(n,x))