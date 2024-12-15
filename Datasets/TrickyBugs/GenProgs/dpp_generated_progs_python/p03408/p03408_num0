def max_balance():
    N = int(input())
    blue = {}
    for _ in range(N):
        card = input()
        blue[card] = blue.get(card, 0) + 1
    
    M = int(input())
    red = {}
    for _ in range(M):
        card = input()
        red[card] = red.get(card, 0) + 1
    
    max_balance = 0
    
    for card in blue:
        balance = blue[card] - red.get(card, 0)
        max_balance = max(max_balance, balance)
    
    print(max_balance)

max_balance()