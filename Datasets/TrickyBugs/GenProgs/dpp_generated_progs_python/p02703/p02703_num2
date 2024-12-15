from typing import List
from heapq import heappop, heappush

class City:
    def __init__(self, index):
        self.index = index
        self.neighbors = []
        self.exchange_counter = None
        self.min_time = float('inf')
    
    def add_neighbor(self, neighbor, cost, time):
        self.neighbors.append((neighbor, cost, time))
    
    def set_exchange_counter(self, exchange_counter):
        self.exchange_counter = exchange_counter
    
    def __lt__(self, other):
        return self.min_time < other.min_time

class ExchangeCounter:
    def __init__(self, index, conversion_rate, transaction_time):
        self.index = index
        self.conversion_rate = conversion_rate
        self.transaction_time = transaction_time
    
    def exchange(self, gold_coins):
        return gold_coins * self.conversion_rate, gold_coins * self.transaction_time

def find_minimum_time(n: int, m: int, s: int, railroads: List[List[int]], exchange_counters: List[List[int]]) -> List[int]:
    cities = [City(i) for i in range(n+1)]
    for u, v, a, b in railroads:
        cities[u].add_neighbor(v, a, b)
        cities[v].add_neighbor(u, a, b)
    for i, (c, d) in enumerate(exchange_counters):
        cities[i+1].set_exchange_counter(ExchangeCounter(i+1, c, d))

    heap = [(0, 1, s)]
    while heap:
        time, curr_city, silver_coins = heappop(heap)
        city = cities[curr_city]
        if time < city.min_time:
            city.min_time = time
            if city.exchange_counter:
                silver_coins, transaction_time = city.exchange_counter.exchange(silver_coins)
                time += transaction_time
            for neighbor, cost, travel_time in city.neighbors:
                if cost > silver_coins:
                    continue
                heappush(heap, (time + travel_time, neighbor, silver_coins - cost))
    
    return [city.min_time for city in cities[2:]]

# read input
n, m, s = map(int, input().split())
railroads = [list(map(int, input().split())) for _ in range(m)]
exchange_counters = [list(map(int, input().split())) for _ in range(n)]

# calculate and print minimum times
minimum_times = find_minimum_time(n, m, s, railroads, exchange_counters)
for minimum_time in minimum_times:
    print(minimum_time)