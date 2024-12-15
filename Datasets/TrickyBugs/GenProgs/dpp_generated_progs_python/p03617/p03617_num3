Q, H, S, D = map(int, input().split())
N = int(input())

cost = float('inf')

for i in range(N+1):
    bottle_2L = i * 2
    remaining = N - bottle_2L
    if remaining >= 0:
        cost_2L = remaining * D
        cost = min(cost, cost_2L)
        
        for j in range(remaining+1):
            bottle_1L = j
            remaining = N - bottle_2L - bottle_1L
            if remaining >= 0:
                cost_1L = remaining * S
                cost = min(cost, cost_2L + cost_1L)
                
                for k in range(remaining+1):
                    bottle_0_5L = k * 2
                    remaining = N - bottle_2L - bottle_1L - bottle_0_5L
                    if remaining >= 0:
                        cost_0_5L = remaining * H
                        cost = min(cost, cost_2L + cost_1L + cost_0_5L)
                        
                        for l in range(remaining+1):
                            bottle_0_25L = l * 4
                            remaining = N - bottle_2L - bottle_1L - bottle_0_5L - bottle_0_25L
                            if remaining >= 0:
                                cost_0_25L = remaining * Q
                                cost = min(cost, cost_2L + cost_1L + cost_0_5L + cost_0_25L)
                                
print(cost)