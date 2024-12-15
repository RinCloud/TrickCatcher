import sys

def shiritori(N, words):
    used_words = set()
    for i in range(N):
        if i == 0 or words[i][0] == words[i-1][-1]:
            if words[i] not in used_words:
                used_words.add(words[i])
            else:
                return "No"
        else:
            return "No"
    return "Yes"

N = int(input())
words = [input().strip() for _ in range(N)]

result = shiritori(N, words)
print(result)