N = int(input())
A = list(map(int, input().split()))

# Sort the cards in ascending order
A.sort()

# Count the number of distinct values
distinct_values = len(set(A))

# The maximum number of remaining cards is equal to the number of distinct values or (N + 1) // 2, whichever is smaller
maximum_remaining_cards = min(distinct_values, (N + 1) // 2)

print(maximum_remaining_cards)