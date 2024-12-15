# Program

N = int(input())
cards = list(map(int, input().split()))

frequency = {}
for card in cards:
    if card in frequency:
        frequency[card] += 1
    else:
        frequency[card] = 1

score = 0

# Rearrange and remove 3 cards N-1 times
for _ in range(N-1):
    # Sort the frequency of cards in descending order
    sorted_freq = sorted(frequency.items(), key=lambda x: x[1], reverse=True)

    # Rearrange the five leftmost cards with highest frequency
    first_three_cards, next_two_cards = sorted_freq[:3], sorted_freq[3:]

    # Remove the three leftmost cards
    for card, _ in first_three_cards:
        frequency[card] -= 1
        if frequency[card] == 0:
            del frequency[card]

    # Calculate the score
    if all(count >= 3 for _, count in first_three_cards):
        score += 1

    # Add the next two cards back to the frequency
    for card, count in next_two_cards:
        if card in frequency:
            frequency[card] += count
        else:
            frequency[card] = count

# Check if the remaining three cards are all equal
if len(frequency) == 1:
    score += 1

print(score)