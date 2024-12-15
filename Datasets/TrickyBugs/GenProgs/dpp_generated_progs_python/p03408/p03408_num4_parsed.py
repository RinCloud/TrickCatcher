def max_earning():
    N = int(input())
    blue_cards = [input() for _ in range(N)]
    M = int(input())
    red_cards = [input() for _ in range(M)]

    max_earning = 0
    for card in blue_cards:
        count = blue_cards.count(card) - red_cards.count(card)
        max_earning = max(max_earning, count)

    print(max_earning)

max_earning()