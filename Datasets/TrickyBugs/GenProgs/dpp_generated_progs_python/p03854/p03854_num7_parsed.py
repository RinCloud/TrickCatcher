# Program

def possible_to_obtain(S):
    T = ""
    while len(S) > len(T):
        if S[len(T):len(T)+5] == "dream":
            T += "dream"
        elif S[len(T):len(T)+6] == "eraser":
            T += "eraser"
        elif S[len(T):len(T)+5] == "erase":
            T += "erase"
        elif S[len(T):len(T)+7] == "dreamer":
            T += "dreamer"
        else:
            return "NO"
    if S == T:
        return "YES"
    else:
        return "NO"

# Main
S = input()
print(possible_to_obtain(S))