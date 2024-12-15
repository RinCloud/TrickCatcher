w = input()
asci = 0
letter_counts = {}
for i in w:
    if i in letter_counts:
        letter_counts[i] += 1
    else:
        letter_counts[i] = 1
for count in letter_counts.values():
    if count % 2 != 0:
        print('No')
        break
else:
    print('Yes')