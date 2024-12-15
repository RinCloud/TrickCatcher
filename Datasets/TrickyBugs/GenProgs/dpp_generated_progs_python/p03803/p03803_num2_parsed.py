card1, card2 = map(int, input().split())

if card1 == card2:
    print("Draw")
elif card1 == 1 or (card1 > card2 and card2 != 1):
    print("Alice")
else:
    print("Bob")