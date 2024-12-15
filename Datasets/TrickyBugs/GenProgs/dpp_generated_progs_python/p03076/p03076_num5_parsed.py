A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

order_times = [A, B, C, D, E]
order_times.sort(reverse=True)

time = 0
for dish_time in order_times:
    if time % 10 != 0:
        time += (10 - time % 10)
    time += dish_time

print(time)