import re

def find_treasure(S, T):
    # Count the number of `?` in S
    num_question = S.count("?")

    # Iterate through all possible positions to insert T into S
    for i in range(len(S) - len(T) + 1):
        # Check if the substring of S starting from position i matches T
        if re.match(T.replace("?", "[a-z]"), S[i:]):
            # Create the string S
            S = S[:i] + T + S[i+len(T):]
            # Replace all remaining `?` with 'a'
            S = S.replace("?", "a")
            return S

    # If no valid string S is found, return "UNRESTORABLE"
    return "UNRESTORABLE"


if __name__ == "__main__":
    S = input().strip()
    T = input().strip()

    result = find_treasure(S, T)
    print(result)