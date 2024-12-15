"""
def max_remaining_cards(N, cards):
    card_counts = {}
    
    # count the frequency of each card
    for card in cards:
        if card in card_counts:
            card_counts[card] += 1
        else:
            card_counts[card] = 1
    
    # calculate the maximum possible number of remaining cards
    max_remaining = N
    
    # iterate through each card
    for card in card_counts:
        freq = card_counts[card]
        
        # if the frequency of the card is greater than or equal to 3,
        # subtract 3 from the maximum remaining cards
        if freq >= 3:
            max_remaining -= 3
        
        # if the frequency of the card is 2, subtract 2 from the maximum remaining cards
        elif freq == 2:
            max_remaining -= 2
    
    # return the maximum possible number of remaining cards
    return max_remaining

# read the input values from standard input
N = int(input().strip())
cards = list(map(int, input().strip().split()))

# calculate and print the result
print(max_remaining_cards(N, cards))
"""