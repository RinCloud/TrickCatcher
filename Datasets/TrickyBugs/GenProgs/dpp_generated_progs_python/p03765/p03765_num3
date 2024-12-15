'''
def calculate_transformed_string(S):
"""
Given a string S consisting of 'A' and 'B', perform the operations on S as described in the intention.
Return the transformed string.
"""
    # Convert string S to a list of characters to make the operations easier
    S = list(S)

    # Perform the operations on the string S
    i = 0
    while i < len(S):
        if S[i] == 'A':
            S[i] = 'B'
            S.insert(i + 1, 'B')
            i += 2
        elif S[i] == 'B':
            S[i] = 'A'
            S.insert(i + 1, 'A')
            i += 2

    # Convert the list of characters back to a string
    transformed_string = ''.join(S)

    return transformed_string


def is_substring_possible(S, T, a, b, c, d):
"""
Given two strings S and T, and the starting and ending positions of substrings in S and T, check if the substring of S
can be transformed into the substring of T after performing the operations.
Return 'YES' if possible, 'NO' otherwise.
"""
    # Get the substrings from S and T
    S_substring = S[a - 1: b]
    T_substring = T[c - 1: d]

    # Transform the substring of S
    transformed_substring = calculate_transformed_string(S_substring)

    # Check if the transformed substring is equal to the substring of T
    if transformed_substring == T_substring:
        return 'YES'
    else:
        return 'NO'


# Read the input
S = input()
T = input()
q = int(input())
queries = []
for _ in range(q):
    queries.append(list(map(int, input().split())))

# Process the queries
for query in queries:
    a, b, c, d = query
    result = is_substring_possible(S, T, a, b, c, d)
    print(result)
'''