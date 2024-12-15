def check_possible(N, M, services):
    islands = set()
    for service in services:
        islands.add(service[0])
        islands.add(service[1])
        
    if N in islands:
        return "POSSIBLE"
    
    for service1 in services:
        for service2 in services:
            if service1[0] == 1 and service2[1] == N:
                return "POSSIBLE"
            
    return "IMPOSSIBLE"


N, M = map(int, input().split())

services = []
for _ in range(M):
    a, b = map(int, input().split())
    services.append((a, b))

print(check_possible(N, M, services))