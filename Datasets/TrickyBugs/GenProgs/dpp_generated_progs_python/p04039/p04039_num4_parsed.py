# Start of the program

def is_disliked(amount, digits):
    # check if any digit in the amount is disliked
    amount_str = str(amount)
    for digit in digits:
        if str(digit) in amount_str:
            return True
    return False

# get input values
N, K = map(int, input().split())
digits = list(map(int, input().split()))

# starting from N, check the next smallest number that has no disliked digits
i = N
while is_disliked(i, digits):
    i += 1

print(i)

# End of the program