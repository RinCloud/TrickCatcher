import string

def find_next_word(S):
    alphabet = string.ascii_lowercase
    n = len(S)
    if n == 26:
        return -1
    elif S[n-1] != 'z':
        return S[:n-1] + alphabet[alphabet.index(S[n-1])+1]
    else:
        for i in range(n-2, -1, -1):
            if S[i] < S[i+1]:
                break
        if i == n-2:
            return S + alphabet[0]
        else:
            return S[:i] + alphabet[alphabet.index(S[i])+1] + alphabet[:alphabet.index(S[i+1])-1] + S[i+1]

S = input()
print(find_next_word(S))