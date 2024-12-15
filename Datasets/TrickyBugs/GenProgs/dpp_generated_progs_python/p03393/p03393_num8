import string

def find_next_word(S):
    if len(S) == 26:
        return '-1'
    
    for i in range(1, 27):
        new_word = S + string.ascii_lowercase[i]
        if len(set(new_word)) == len(new_word):
            return new_word

S = input()
print(find_next_word(S))