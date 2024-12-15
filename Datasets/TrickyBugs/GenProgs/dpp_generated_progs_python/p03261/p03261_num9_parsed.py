# Program

def shiritori(N, words):
    used_words = set()
    for i in range(N):
        if i > 0:
            if words[i][0] != words[i-1][-1] or words[i] in used_words:
                return "No"
        used_words.add(words[i])
    return "Yes"


# Read input
N = int(input())
words = []
for _ in range(N):
    words.append(input())

# Call the function and print the result
print(shiritori(N, words))