s = map(int, input())
k = int(input())

for i, v in enumerate(s):
  if i + 1 == k or v > 1:
    print(v)
    break
