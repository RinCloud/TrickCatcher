# program to determine whether all characters in a string are different

def is_all_characters_different(S):
    unique_chars = set(S)
    if len(unique_chars) == len(S):
        return "yes"
    else:
        return "no"


# input the string
S = input()

# determine if all characters are different
result = is_all_characters_different(S)

# output the result
print(result)