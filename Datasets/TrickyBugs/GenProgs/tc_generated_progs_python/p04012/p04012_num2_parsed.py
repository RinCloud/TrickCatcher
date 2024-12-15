w = input()
freq = {}

for i in w:
    if i in freq:
        freq[i] += 1
    else:
        freq[i] = 1

beautiful = True
for count in freq.values():
    if count % 2 != 0:
        beautiful = False
        break

if beautiful:
    print('Yes')
else:
    print('No')