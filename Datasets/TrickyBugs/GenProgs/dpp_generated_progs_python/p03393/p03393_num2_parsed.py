def next_diverse_word(S):
    n = len(S)
    
    if n == 26:
        print(-1)
    else:
        used = [False] * 26
        
        for i in range(n):
            used[ord(S[i]) - ord('a')] = True
        
        for i in range(26):
            if not used[i]:
                print(S + chr(ord('a') + i))
                break

S = input()
next_diverse_word(S)