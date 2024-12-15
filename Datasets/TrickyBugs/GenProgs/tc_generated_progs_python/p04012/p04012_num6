w = input()
asci_count = [0] * 26
for i in w:
    asci_count[ord(i) - ord('a')] += 1
is_beautiful = True
for count in asci_count:
    if count % 2 != 0:
        is_beautiful = False
        break
if is_beautiful:
    print('Yes')
else:
    print('No')