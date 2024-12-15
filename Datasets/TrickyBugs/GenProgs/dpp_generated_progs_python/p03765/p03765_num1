'''
# Create a helper function to check if a string can be transformed into another string
# by performing the operations

def can_transform(string1, string2):
    # If the lengths of the strings are not equal, return False
    if len(string1) != len(string2):
        return False
    
    # Initialize two pointers to point to the start of the strings
    i = 0
    j = 0
    
    # Iterate through the strings
    while i < len(string1) and j < len(string2):
        # If the current characters are equal, move to the next characters
        if string1[i] == string2[j]:
            i += 1
            j += 1
        # If the current characters are not equal, check if they can be transformed into each other
        else:
            # If the character in string1 can be transformed into the character in string2, move to the next character in string1
            if (string1[i] == 'A' and string2[j] == 'B') or (string1[i] == 'B' and string2[j] == 'A'):
                i += 1
            # If the character in string2 can be transformed into the character in string1, move to the next character in string2
            elif (string2[j] == 'A' and string1[i] == 'B') or (string2[j] == 'B' and string1[i] == 'A'):
                j += 1
            # If the characters cannot be transformed into each other, return False
            else:
                return False
    
    # If both pointers have reached the end of the strings, return True
    if i == len(string1) and j == len(string2):
        return True
    
    # If one of the pointers hasn't reached the end of the string, return False
    return False
    

# Read input strings S and T
S = input()
T = input()

# Read the number of queries
q = int(input())

# Perform the queries
for query in range(q):
    # Read the query parameters
    a, b, c, d = map(int, input().split())
    
    # Get the substring from S and T
    substring_s = S[a-1:b]
    substring_t = T[c-1:d]
    
    # Check if the substring from S can be transformed into the substring from T
    if can_transform(substring_s, substring_t):
        print("YES")
    else:
        print("NO")
'''