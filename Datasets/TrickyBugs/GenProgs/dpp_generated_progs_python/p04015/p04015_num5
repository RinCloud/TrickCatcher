# function to calculate average
def calculate_avg(cards):
    total = sum(cards)
    avg = total / len(cards)
    return avg

# recursive function to count number of ways to select cards
def count_ways(cards, i, selected_cards, target_avg, count):
    if i >= len(cards):
        # check if average of selected cards is equal to target average
        if calculate_avg(selected_cards) == target_avg:
            count += 1
        return count

    # include current card in the selection
    count = count_ways(cards, i+1, selected_cards + [cards[i]], target_avg, count)

    # exclude current card from the selection
    count = count_ways(cards, i+1, selected_cards, target_avg, count)

    return count

# main function to read input and call count_ways function
def main():
    # read input values
    N, A = map(int, input().split())
    cards = list(map(int, input().split()))

    # count number of ways to select cards
    count = count_ways(cards, 0, [], A, 0)

    # print result
    print(count)

if __name__ == "__main__":
    main()