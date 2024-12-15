# Iroha's money handing program

def find_amount_to_hand(N, K, disliked_digits):
    n = N
    while True:
        check_digits = set(str(n))
        if check_digits.isdisjoint(disliked_digits):
            return n
        n += 1

# Read input from standard input
N, K = map(int, input().split())
disliked_digits = set(map(int, input().split()))

# Find amount of money to hand and print it
amount_to_hand = find_amount_to_hand(N, K, disliked_digits)
print(amount_to_hand)