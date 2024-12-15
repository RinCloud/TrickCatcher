X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

bulb_A_sand = X
bulb_B_sand = 0

for i in range(len(r)):
    if i % 2 == 0:
        bulb_A_sand -= (r[i] - r[i-1])
    else:
        bulb_B_sand += (r[i] - r[i-1])
        
for _ in range(Q):
    t, a = map(int, input().split())
    if t < r[0]:
        print(a)
    else:
        cycle = (t - r[0]) // (r[-1] - r[-2])
        remaining_time = (t - r[0]) % (r[-1] - r[-2])
        upper_bulb_sand = X - (cycle * (bulb_A_sand + bulb_B_sand)) - remaining_time
        if remaining_time > r[K-1]:
            upper_bulb_sand -= (remaining_time - r[K-1])
        print(upper_bulb_sand)