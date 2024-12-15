from collections import defaultdict

def city_roads(N, M, roads):
    city_count = defaultdict(int)
    
    for road in roads:
        city_count[road[0]] += 1
        city_count[road[1]] += 1
    
    for i in range(1, N+1):
        print(city_count[i])
        
N, M = map(int, input().split())
roads = []
for _ in range(M):
    a, b = map(int, input().split())
    roads.append((a, b))
    
city_roads(N, M, roads)