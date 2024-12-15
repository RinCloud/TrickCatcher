w = input()

count = [0] * 26

for i in w:
    count[ord(i) - ord('a')] += 1

is_beautiful = True
for c in count:
    if c % 2 != 0:
        is_beautiful = False
        break

if is_beautiful:
    print('Yes')
else:
    print('No')

