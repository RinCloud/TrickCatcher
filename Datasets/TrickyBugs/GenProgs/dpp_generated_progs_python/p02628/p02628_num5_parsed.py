from typing import List

def minimum_total_price(N: int, K: int, prices: List[int]) -> int:
    prices.sort()
    return sum(prices[:K])

N, K = map(int, input().split())
prices = list(map(int, input().split()))

result = minimum_total_price(N, K, prices)
print(result)