S = input()

# We will iterate through the characters of the string S from right to left,
# checking if the suffix of S starting from each position matches any of the words "dream", "dreamer", "erase" or "eraser".
# We will keep track of the position from where the match starts,
# and at each iteration, check if the suffix from the current position matches any of the words.
# If a match is found, we will update the current position to the start of the matched word and continue iterating.
# If no match is found, it means that it is not possible to obtain S = T, so we will print "NO".

current_pos = len(S)
while current_pos > 0:
    if S[current_pos-5:current_pos] == 'dream' or \
       S[current_pos-7:current_pos] == 'dreamer' or \
       S[current_pos-5:current_pos] == 'erase' or \
       S[current_pos-6:current_pos] == 'eraser':
        current_pos -= 5 if S[current_pos-5:current_pos] == 'dream' else \
                       7 if S[current_pos-7:current_pos] == 'dreamer' else \
                       5 if S[current_pos-5:current_pos] == 'erase' else \
                       6 if S[current_pos-6:current_pos] == 'eraser' else 0
    else:
        print("NO")
        exit()
print("YES")