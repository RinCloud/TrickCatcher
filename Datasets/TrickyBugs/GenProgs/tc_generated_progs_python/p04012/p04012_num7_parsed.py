w = input()
letter_count = [0] * 26

for i in w:
    letter_count[ord(i) - ord('a')] += 1

if all(count % 2 == 0 for count in letter_count):
    print('Yes')
else:
    print('No')