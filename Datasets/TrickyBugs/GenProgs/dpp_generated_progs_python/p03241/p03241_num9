import math
N, M = map(int, input().split())

def maximum_gcd(N, M):
  gcd = 1
  for i in range(1, int(math.sqrt(M))+1):
    if M % i == 0:
      if i <= M // N:
        gcd = max(gcd, i)
      
      if M // i <= M // N:
        gcd = max(gcd, M // i)
  
  return gcd

print(maximum_gcd(N, M))