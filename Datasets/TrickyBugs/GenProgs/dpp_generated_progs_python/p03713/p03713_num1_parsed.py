def min_difference(h, w):
    if h % 3 == 0 or w % 3 == 0:
        return 0
    else:
        min_diff = min(h, w)
        if min_diff == h:
            return min_diff // 3
        else:
            return min_diff // 3

h, w = map(int, input().split())
print(min_difference(h, w))