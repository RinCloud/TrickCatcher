n = int(input())
l = list(map(int, input().split()))
mod = 10**9+7
if n % 2 == 0 and len(set(l)) == n//2:
  num_possible_orders = pow(2, n//2, mod)
  print(num_possible_orders)
elif not n % 2 == 0 and l.count(0) == 1:
  num_possible_orders = pow(2, (n-1)//2, mod)
  print(num_possible_orders)
else:
  print(0)
