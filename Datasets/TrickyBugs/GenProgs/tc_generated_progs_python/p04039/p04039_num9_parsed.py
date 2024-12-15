N, K = map(int, input().split())
D = set(map(int, input().split()))

def is_disliked(num):

    while num > 0:
        digit = num % 10
        if digit in D:
            return True
        num //= 10

    return False

def find_minimum_amount(N, D):

    while is_disliked(N):
        N += 1

    return N

min_amount = find_minimum_amount(N, D)
print(min_amount)
