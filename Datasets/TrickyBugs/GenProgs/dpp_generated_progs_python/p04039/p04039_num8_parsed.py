import sys

def is_disliked(disliked, num):
    num_str = str(num)
    for d in disliked:
        if str(d) in num_str:
            return True
    return False

def get_minimum_amount(N, K, disliked):
    amount = N
    while is_disliked(disliked, amount):
        amount += 1
    return amount

if __name__ == "__main__":
    N, K = map(int, input().split())
    disliked = list(map(int, input().split()))
    print(get_minimum_amount(N, K, disliked))