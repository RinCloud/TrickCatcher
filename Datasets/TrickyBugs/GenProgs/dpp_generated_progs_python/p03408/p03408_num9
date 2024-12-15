# I will iterate through each blue card and red card, count the number of times the string announced by Takahashi matches the string on the card.
# I will keep track of the maximum balance (the maximum amount of money Takahashi can earn) by taking the maximum of the current balance and the difference between the total count of blue cards and the total count of red cards.

N = int(input())
blue_cards = [input().strip() for _ in range(N)]
M = int(input())
red_cards = [input().strip() for _ in range(M)]

max_balance = 0

for string in set(blue_cards):
    count = blue_cards.count(string) - red_cards.count(string)
    max_balance = max(max_balance, count)

print(max_balance)