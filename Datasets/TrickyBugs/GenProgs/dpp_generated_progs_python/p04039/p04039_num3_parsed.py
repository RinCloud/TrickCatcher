from typing import List

def is_disliked_number(n: int, disliked_digits: List[int]) -> bool:
    while n > 0:
        digit = n % 10
        if digit in disliked_digits:
            return True
        n = n // 10
    return False

def find_minimum_amount(N: int, K: int, D: List[int]) -> int:
    amount = N
    while True:
        if not is_disliked_number(amount, D):
            return amount
        amount += 1

N, K = map(int, input().split())
D = list(map(int, input().split()))

print(find_minimum_amount(N, K, D))