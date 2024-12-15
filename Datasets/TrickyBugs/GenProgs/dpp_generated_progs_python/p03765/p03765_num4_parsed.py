import sys

def is_substring_possible(S, T, a, b, c, d):
    len_S = len(S)
    len_T = len(T)

    # Check if substring lengths are the same
    if (b - a + 1) != (d - c + 1):
        return "NO"

    # Check if substrings contain only 'A' or 'B' characters
    if (S[a-1:b] != 'A' * (b - a + 1)) and (S[a-1:b] != 'B' * (b - a + 1)):
        return "NO"
    if (T[c-1:d] != 'A' * (d - c + 1)) and (T[c-1:d] != 'B' * (d - c + 1)):
        return "NO"

    # Check if substrings can be transformed into each other
    count_S_A = S[a-1:b].count('A')
    count_T_A = T[c-1:d].count('A')
    count_S_B = (b - a + 1) - count_S_A
    count_T_B = (d - c + 1) - count_T_A

    if (count_S_A == count_T_A) and (count_S_B == count_T_B):
        return "YES"
    elif (count_S_A == count_T_B) and (count_S_B == count_T_A):
        return "YES"
    else:
        return "NO"

# Read input from standard input
S = sys.stdin.readline().strip()
T = sys.stdin.readline().strip()
q = int(sys.stdin.readline())
queries = []
for _ in range(q):
    queries.append(list(map(int, sys.stdin.readline().split())))

# Process each query and print output
for query in queries:
    print(is_substring_possible(S, T, query[0], query[1], query[2], query[3]))