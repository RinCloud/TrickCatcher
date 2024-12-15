w = input()
char_count = {}
for i in w:
    if i in char_count:
        char_count[i] += 1
    else:
        char_count[i] = 1

beautiful = True
for count in char_count.values():
    if count % 2 != 0:
        beautiful = False
        break

if beautiful:
    print('Yes')
else:
    print('No')