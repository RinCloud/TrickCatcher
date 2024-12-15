w = input()
asci = 0
for i in w:
  asci = asci^ord(i)
if asci == 0:
  print('Yes')
else:
  print('No')
