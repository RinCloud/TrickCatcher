N = int(input())
a = list(map(int, list(input())))

while N != 0:
	digit = 1
	while digit < N // 2:
		digit *= 2

	x = []
	for i in range(digit, N):
		x.append(abs(a[i - digit] - a[i]))

	a = x
	N -= digit
	if len(x) == 1:
		break

print(a[0])