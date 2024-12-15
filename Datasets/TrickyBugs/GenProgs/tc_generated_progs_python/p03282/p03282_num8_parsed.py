s = input()
k = int(input())

count = [0] * 10
for i, v in enumerate(s):
    count[int(v)] += 1

for i in range(1, 10):
    if count[i] >= k:
        print(i)
        break
    k -= count[i]