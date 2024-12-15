# Here's a program that achieves the given intention:

n, k = map(int, input().split())
disliked_digits = set(map(int, input().split()))

def is_valid(num):
    while num > 0:
        digit = num % 10
        if digit in disliked_digits:
            return False
        num //= 10
    return True

amount = n
while not is_valid(amount):
    amount += 1

print(amount)