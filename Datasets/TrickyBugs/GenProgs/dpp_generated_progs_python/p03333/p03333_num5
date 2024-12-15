n = int(input())
segments = []
for _ in range(n):
    l, r = map(int, input().split())
    segments.append((l, r))
    
total_distance = 0
for segment in segments:
    l, r = segment
    total_distance += (r - l + 1)
    
print(total_distance)