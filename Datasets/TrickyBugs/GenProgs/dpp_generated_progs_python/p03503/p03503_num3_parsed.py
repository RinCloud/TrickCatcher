# Program:

import itertools

def calc_profit(n, f, p):
    max_profit = float('-inf')
    
    for combination in itertools.product([0, 1], repeat=10):
        if sum(combination) == 0:
            continue
        
        profit = 0
        
        for i, (open_times, priority) in enumerate(zip(f, p)):
            overlap = 0
            
            for j, k in enumerate(open_times):
                if k == 1 and combination[j] == 1:
                    overlap += 1
            
            profit += priority[overlap]
        
        max_profit = max(max_profit, profit)
    
    return max_profit


if __name__ == "__main__":
    n = int(input())
    
    f = []
    for _ in range(n):
        f.append(list(map(int, input().split())))
    
    p = []
    for _ in range(n):
        p.append(list(map(int, input().split())))
    
    max_profit = calc_profit(n, f, p)
    
    print(max_profit)