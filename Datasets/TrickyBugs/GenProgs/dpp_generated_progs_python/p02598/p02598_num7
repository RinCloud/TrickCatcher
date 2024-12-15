# Reading input
N, K = map(int, input().split())
logs = list(map(int, input().split()))

# Binary search
low = 0
high = max(logs)

while low < high:
  mid = (low + high + 1) // 2
  cuts = sum([(log + mid - 1) // mid - 1 for log in logs])

  if cuts <= K:
    high = mid - 1
  else:
    low = mid

print(low + 1)