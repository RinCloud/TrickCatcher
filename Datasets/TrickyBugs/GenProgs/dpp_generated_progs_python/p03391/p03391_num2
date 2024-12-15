# Program:

def find_candies(n, seq):
    max_candies = 0
    min_candies = float('inf')
    
    for i in range(n):
        a, b = seq[i]
        if a < b:
            max_candies += a
        if a > b:
            min_candies = min(min_candies, b)
    
    if max_candies == 0:
        return 0
    
    return max_candies + min_candies

n = int(input())
seq = []

for _ in range(n):
    a, b = map(int, input().split())
    seq.append((a, b))

result = find_candies(n, seq)
print(result)