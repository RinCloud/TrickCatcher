import sys

N = int(input())
words = []
for i in range(N):
    words.append(input().strip())

used_words = [words[0]]
for i in range(1, N):
    if words[i] in used_words or words[i][0] != used_words[-1][-1]:
        print("No")
        sys.exit()
    used_words.append(words[i])

print("Yes")