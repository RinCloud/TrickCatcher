w = input()

letter_count = [0] * 26

for letter in w:
    letter_count[ord(letter) - ord('a')] += 1

is_beautiful = True

for count in letter_count:
    if count % 2 != 0:
        is_beautiful = False
        break

if is_beautiful:
    print("Yes")
else:
    print("No")