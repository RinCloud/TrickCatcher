n = int(input())
a = map(int, input().split())

c_list = {}
for i in a:
	if i in c_list:
		c_list[i] += 1
	else:
		c_list[i] = 1

ans = 0
for k, v in c_list.items():
	_sum = c_list[k]
	if (k-1) in c_list:
		_sum += c_list[k-1]
	if (k+1) in c_list:
		_sum += c_list[k+1]
	if _sum > ans:
		ans = _sum
print(ans)
