# Input
A, B, C, K = map(int, input().split())

# Calculate sum of cards
sum_cards = min(A, K) * 1 + min(B, K - A) * 0 + min(C, K - A - B) * (-1)

# Output
print(sum_cards)