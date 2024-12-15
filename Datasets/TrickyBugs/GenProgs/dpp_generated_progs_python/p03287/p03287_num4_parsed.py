from collections import defaultdict

def count_pairs(N, M, candies):
    prefix_sum = [0]
    for candy in candies:
        prefix_sum.append((prefix_sum[-1] + candy) % M)
    
    count = defaultdict(int)
    for ps in prefix_sum:
        count[ps] += 1
    
    result = 0
    for c in count.values():
        result += c * (c - 1) // 2
    
    return result

N, M = map(int, input().split())
candies = list(map(int, input().split()))

print(count_pairs(N, M, candies))