n = int(input())
words = []
for _ in range(n):
    new_word = input()
    if new_word in words or (words and words[-1][-1] != new_word[0]):
        print("No")
        break
    words.append(new_word)
else:
    print("Yes")