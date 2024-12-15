# Program:

N, K = map(int, input().split())
prices = list(map(int, input().split()))

prices.sort()

total_price = sum(prices[:K])

print(total_price)