n,x=map(int,input().split())

def func(n,x):
  if n==0:
    return 0
  elif x <= 1:
    return 0
  elif x < (2**(n+1)-3) // 2 + 1:
    return func(n-1,x-1)
  elif x == (2**(n+1)-3) // 2 + 1:
    return func(n-1, x-1) + 1
  elif x == (2**(n+1)-3) // 2 + 2:
    return func(n-1, x-2) + 1
  else:
    return 2**n + func(n-1,x-((2**(n+1)-3) // 2 + 2)) - 1

print(func(n,x))