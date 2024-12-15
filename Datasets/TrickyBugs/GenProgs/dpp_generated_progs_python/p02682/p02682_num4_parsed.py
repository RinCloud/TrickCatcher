# Taking input from the user
A, B, C, K = map(int, input().split())

# Choosing the cards with highest values first
# 1 cards have the highest values, so we choose min(K, A) of them
sum = min(K, A)

# Subtracting the chosen 1 cards from the total number of cards being picked
K -= min(K, A)

# If there are still cards to be picked, we choose 0 cards
# 0 cards have a value of 0, so the sum does not change
sum -= min(K, B)

# Subtracting the chosen 0 cards from the total number of cards being picked
K -= min(K, B)

# If there are still cards to be picked, we choose -1 cards
# -1 cards have the lowest values, so we choose min(K, C) of them
sum -= min(K, C)

# Printing the maximum possible sum
print(sum)