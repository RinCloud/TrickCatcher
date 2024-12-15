w = input()
letter_counts = [0] * 26

for i in w:
    index = ord(i) - ord('a') # convert letter to index from 0 to 25
    letter_counts[index] += 1

beautiful = True
for count in letter_counts:
    if count % 2 != 0:
        beautiful = False
        break

if beautiful:
    print('Yes')
else:
    print('No')
