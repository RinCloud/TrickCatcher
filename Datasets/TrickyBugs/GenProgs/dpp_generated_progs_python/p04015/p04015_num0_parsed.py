import itertools

def ways_to_select_cards(N, A, cards):
    count = 0
    for r in range(1, N+1):
        combinations = itertools.combinations(cards, r)
        for combination in combinations:
            if sum(combination) == A*r:
                count += 1
    return count

# Read input values
N, A = map(int, input().split())
cards = list(map(int, input().split()))

# Call the function and print the result
print(ways_to_select_cards(N, A, cards))