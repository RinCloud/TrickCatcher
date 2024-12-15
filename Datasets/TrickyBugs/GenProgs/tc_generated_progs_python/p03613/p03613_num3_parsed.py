from collections import Counter

n = int(input())
a = map(int, input().split())

c_list = Counter(a)

ans = 0
for k, v in c_list.items():
    _sum = c_list[k]
    if (k - 1) in c_list:
        _sum += c_list[k - 1]
    if (k + 1) in c_list:
        _sum += c_list[k + 1]
    if _sum > ans:
        ans = _sum
print(ans)
