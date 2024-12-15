# Read input from standard input
N, K = map(int, input().split())
S = input()

# Initialize variables
max_consecutive_hands = 0

# Count the number of consecutive people standing on hands at the beginning
consecutive_hands = 0
for i in range(N):
    if S[i] == '1':
        consecutive_hands += 1
    else:
        max_consecutive_hands = max(max_consecutive_hands, consecutive_hands)
        consecutive_hands = 0
max_consecutive_hands = max(max_consecutive_hands, consecutive_hands)

# Flip the people standing on hands
num_flips = min(K, consecutive_hands)  # Number of flips is limited by K and the number of consecutive people standing on hands
max_consecutive_hands += num_flips

# Output the result
print(max_consecutive_hands)