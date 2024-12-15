import math

def get_shortest_possible_length(N, K, logs):
    left = 0
    right = max(logs)
    
    while left < right:
        mid = (left + right) // 2
        cuts = 0
        
        for log in logs:
            cuts += math.ceil(log / mid) - 1
        
        if cuts <= K:
            right = mid
        else:
            left = mid + 1
    
    return left

N, K = map(int, input().split())
logs = list(map(int, input().split()))

result = get_shortest_possible_length(N, K, logs)
print(result)