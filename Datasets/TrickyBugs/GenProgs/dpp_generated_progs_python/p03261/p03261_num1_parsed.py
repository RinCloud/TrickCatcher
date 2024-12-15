def validate_shiritori(N, words):
    used_words = set()
    last_char = words[0][-1]
    for word in words:
        if word in used_words or word[0] != last_char:
            return "No"
        used_words.add(word)
        last_char = word[-1]
    return "Yes"

N = int(input())
words = []
for _ in range(N):
    words.append(input())

result = validate_shiritori(N, words)
print(result)
