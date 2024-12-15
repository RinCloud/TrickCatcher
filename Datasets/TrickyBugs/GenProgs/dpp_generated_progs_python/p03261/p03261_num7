import sys

def main():
    n = int(sys.stdin.readline().strip())
    words = []
    for _ in range(n):
        words.append(sys.stdin.readline().strip())

    used_words = set()
    prev_word = words[0]
    used_words.add(prev_word)

    for word in words[1:]:
        if word in used_words or prev_word[-1] != word[0]:
            print("No")
            return
        used_words.add(word)
        prev_word = word

    print("Yes")

main()