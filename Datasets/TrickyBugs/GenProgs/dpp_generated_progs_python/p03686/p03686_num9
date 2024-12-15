n, m = map(int, input().split())
segments = [list(map(int, input().split())) for _ in range(n)]
leftmost = max(seg[0] for seg in segments)
rightmost = min(seg[1] for seg in segments)
ans = rightmost - leftmost + 1 if leftmost <= rightmost else 0
print(ans if ans >= 0 else 0)