n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for i in range(n)]
for x, y in a:
	a_connects[x-1].append(y-1)
	a_connects[y-1].append(x-1)

a_connect_sums = [len(connect) for connect in a_connects]
bridge_count = 0
while 1 in a_connect_sums:
	x = a_connect_sums.index(1)
	y = a_connects[x][0]

	a_connects[x].remove(y)
	a_connects[y].remove(x)

	a_connect_sums[x] -= 1
	a_connect_sums[y] -= 1

	bridge_count += 1

print(bridge_count)