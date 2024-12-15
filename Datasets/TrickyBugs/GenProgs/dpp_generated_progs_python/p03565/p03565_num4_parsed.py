# First, we need to find the index of T in S'. If T is not a substring of S', print "UNRESTORABLE".
# Then we replace '?' in S' with the corresponding characters in T.
# Finally, we print S.

S = input()
T = input()

# Find the index of T in S'
index = S.find(T)

# If T is not a substring of S', print "UNRESTORABLE"
if index == -1:
    print("UNRESTORABLE")
else:
    # Replace '?' in S' with the corresponding characters in T
    S = S.replace('?', 'a')

    # Update the characters with T
    S = S[:index] + T + S[index + len(T):]

    # Print S
    print(S)