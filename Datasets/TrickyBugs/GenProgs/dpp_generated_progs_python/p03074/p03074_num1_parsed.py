'''
# Algorithm
1. Read the values of N, K and S from input.
2. Initialize the variables max_consecutive_hands = 0, consecutive_hands = 0.
3. Convert the string S into a list of integers.
4. Loop through each character in the list:
   - If the character is 1, increment consecutive_hands by 1.
   - Else, update max_consecutive_hands to be the maximum of max_consecutive_hands and consecutive_hands, and reset consecutive_hands to 0.
5. Update max_consecutive_hands to be the maximum of max_consecutive_hands and consecutive_hands.
6. Finally, print max_consecutive_hands.

# A Complete Python program

# Step 1
N, K = map(int, input().split())
S = input().strip()

# Step 2
max_consecutive_hands = 0
consecutive_hands = 0

# Step 3
S = [int(x) for x in S]

# Step 4
for i in range(len(S)):
    if S[i] == 1:
        consecutive_hands += 1
    else:
        max_consecutive_hands = max(max_consecutive_hands, consecutive_hands)
        consecutive_hands = 0

# Step 5
max_consecutive_hands = max(max_consecutive_hands, consecutive_hands)

# Step 6
print(max_consecutive_hands)
'''