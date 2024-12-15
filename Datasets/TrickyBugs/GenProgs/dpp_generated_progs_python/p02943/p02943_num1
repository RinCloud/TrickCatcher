from collections import deque

def lexicographically_smallest_string(n, k, s):
    s = deque(s)
    rev_s = s.copy()
    rev_s.reverse()
    s.extend(rev_s)
    
    queue = deque()
    for i in range(n):
        queue.append((s[i:i+n], 0))
    
    for _ in range(k):
        min_substring = min(queue)
        queue.remove(min_substring)
        
        substring, idx = min_substring
        idx += 1
        if idx < n:
            queue.append((substring, idx))
    
    return ''.join(queue[0][0])

# Read input
n, k = map(int, input().split())
s = input().strip()

# Call the function and print the result
result = lexicographically_smallest_string(n, k, s)
print(result)