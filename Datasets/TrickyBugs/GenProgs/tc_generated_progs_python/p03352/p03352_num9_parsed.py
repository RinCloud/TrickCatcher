x = int(input())

li = []
for i in range(int(x ** 0.5) + 1):
  for j in range(2, x + 1):
    power = i ** j
    if power <= x:
      li.append(power)

print(max(li))
