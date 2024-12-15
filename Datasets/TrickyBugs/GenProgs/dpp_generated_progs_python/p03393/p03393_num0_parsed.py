def next_word(S):
    n = len(S)
    
    if n == 26:
        return -1
    
    if S[n - 1] != 'z':
        return S[:-1] + chr(ord(S[n - 1]) + 1)
    
    i = n - 2
    while i >= 0 and S[i] == chr(ord(S[i + 1]) - 1):
        i -= 1
        
    if i == -1:
        return -1
    
    return S[:i] + chr(ord(S[i]) + 1) + ''.join(chr(ord(S[i]) + j) for j in range(i + 2, n + 1))

S = input().strip()
print(next_word(S))