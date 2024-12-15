N, K = map(int, input().split())
disliked_digits = set(map(int, input().split()))

def has_disliked_digits(num):
    while num > 0:
        digit = num % 10
        if digit in disliked_digits:
            return True
        num //= 10
    return False

amount = N
while True:
    if not has_disliked_digits(amount):
        break
    amount += 1

print(amount)
