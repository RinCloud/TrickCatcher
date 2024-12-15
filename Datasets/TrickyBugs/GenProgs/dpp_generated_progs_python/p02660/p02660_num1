import math
def is_prime(n):
  if n < 2:
    return False
  for i in range(2, int(math.sqrt(n))+1):
    if n % i == 0:
      return False
  return True

N = int(input())

factors = []
for i in range(2, int(math.sqrt(N))+1):
  if N % i == 0:
    factors.append(i)
    if i * i != N:
      factors.append(N // i)

max_count = 0
for factor in factors:
  count = 0
  while N % factor == 0:
    N = N // factor
    count += 1
  max_count = max(max_count, count)

if N > 1:
  max_count = max(max_count, 1)

print(max_count)