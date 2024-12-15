n, k = map(int, input().split())
digits = set(map(int, input().split()))

def is_disliked(num, digits):
    while num > 0:
        if num % 10 in digits:
            return True
        num //= 10
    return False

amount = n
while is_disliked(amount, digits):
    amount += 1

print(amount)