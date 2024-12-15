A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

order_times = [A, B, C, D, E]
order_times.sort(reverse=True)

time = 0
for i in range(5):
    time = ((time + 9) // 10) * 10 + order_times[i]

print(time)