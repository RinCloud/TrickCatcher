w = input()
count = {}
for i in w:
    if i in count:
        count[i] += 1
    else:
        count[i] = 1
beautiful = True
for value in count.values():
    if value % 2 != 0:
        beautiful = False
        break
if beautiful:
    print('Yes')
else:
    print('No')