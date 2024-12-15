# Program

def restore_string(S, T):
    n = len(S)
    m = len(T)

    ans = ""
    for i in range(n - m + 1):
        match = True
        for j in range(m):
            if S[i+j] != '?' and S[i+j] != T[j]:
                match = False
                break
        if match:
            ans = S[:i] + T + S[i+m:]
            ans = ans.replace('?', 'a')
            break

    if ans == "":
        ans = "UNRESTORABLE"
    
    return ans

S = input()
T = input()

result = restore_string(S, T)
print(result)