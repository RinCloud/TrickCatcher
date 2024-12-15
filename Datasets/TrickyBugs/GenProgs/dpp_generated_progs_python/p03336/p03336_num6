from typing import List

def calculate_numbers(n: int, m: int, k: int, s: str, t: str) -> List[str]:
    x = int(s, 2)
    y = int(t, 2)
    
    for _ in range(k):
        z = x & y
        x += z
        y += z
    
    return [bin(x)[2:].zfill(n), bin(y)[2:].zfill(m)]

# Read input
n, m, k = map(int, input().split())
s = input().strip()
t = input().strip()

# Calculate numbers
result = calculate_numbers(n, m, k, s, t)

# Print output
print(result[0])
print(result[1])