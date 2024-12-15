n = int(input())
cards = list(map(int, input().split()))

cards.sort(reverse=True)
alice_score = sum(cards[::2])
bob_score = sum(cards[1::2])

result = alice_score - bob_score
print(result)