import re

def dream_string_possible(S):
    T = ""
    while len(S) > 0:
        if re.match(r"dream$", S):
            T += "dream"
            S = S[:-5]
        elif re.match(r"dreamer$", S):
            T += "dreamer"
            S = S[:-7]
        elif re.match(r"erase$", S):
            T += "erase"
            S = S[:-5]
        elif re.match(r"eraser$", S):
            T += "eraser"
            S = S[:-6]
        else:
            break
    if S == "":
        return "YES"
    else:
        return "NO"

# Read input S
S = input()

# Calculate whether S can be obtained by appending the given strings
result = dream_string_possible(S)

# Print the result
print(result)