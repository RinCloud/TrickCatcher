N, K = map(int, input().split())
logs = list(map(int, input().split()))

def is_possible(cuts):
    total_cuts = 0
    for log in logs:
        total_cuts += (log-1) // cuts
    return total_cuts <= K

left = 1
right = max(logs)

while left < right:
    mid = (left + right) // 2
    if is_possible(mid):
        right = mid
    else:
        left = mid + 1

print(left)