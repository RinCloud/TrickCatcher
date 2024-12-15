# Program

def max_remaining_cards(N, cards):
    card_occurrence = {}
    remaining_cards = 0

    # Count the occurrence of each card in the deck
    for card in cards:
        if card not in card_occurrence:
            card_occurrence[card] = 1
        else:
            card_occurrence[card] += 1
    
    # Find the remaining cards by performing the operation
    for occurrence in card_occurrence.values():
        remaining_cards += occurrence % 2
        
    return remaining_cards

# Get the input values
N = int(input())
cards = list(map(int, input().split()))

# Call the function and print the output
print(max_remaining_cards(N, cards))