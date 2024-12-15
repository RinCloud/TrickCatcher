n = int(input())
l = list(map(int, input().split()))
mod = 10**9+7
if n % 2 == 0 and len(set(l)) == n//2:
  print((2**(n//2)) % mod)
elif not n % 2 == 0 and l.count(0) == 1:
  print((2**((n-1)//2)) % mod)
else:
  print(0)