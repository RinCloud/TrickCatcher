# PLAN
- First, sort the cards in descending order.
- Initialize Snuke's sum (x) as the first card and Raccoon's sum (y) as 0.
- Iterate through the sorted cards from the second card onwards.
  - For each card, add it to Raccoon's sum (y).
- Calculate the absolute difference between x and y, and print it as the answer.

# Let's write the code now:

N = int(input())
cards = list(map(int, input().split()))

cards.sort(reverse=True)

x = cards[0]
y = 0

for card in cards[1:]:
    y += card

answer = abs(x - y)
print(answer)