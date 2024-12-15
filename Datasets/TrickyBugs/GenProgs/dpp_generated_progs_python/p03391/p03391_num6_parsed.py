# Implementation:

def optimal_candies(N, AB):
    candies = 0
    
    while True:
        # Check if A and B are equal sequences
        if all(x == AB[0][0] for x, _ in AB):
            break
        
        # Find the index of the maximum element in A
        max_A_idx = max(range(N), key=lambda i: AB[i][0])
        # Find the index of the minimum element in B
        min_B_idx = min(range(N), key=lambda i: AB[i][1])
        
        # Decrease A and B by 1 according to the optimal strategy
        AB[max_A_idx][0] -= 1
        AB[min_B_idx][1] -= 1
        
        # Give one candy to Takahashi
        candies += 1
    
    return candies

N = int(input())
AB = [list(map(int, input().split())) for _ in range(N)]

print(optimal_candies(N, AB))