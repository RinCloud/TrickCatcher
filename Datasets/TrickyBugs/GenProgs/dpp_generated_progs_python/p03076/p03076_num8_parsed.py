A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

order_times = [A, B, C, D, E]
max_order_time = max(order_times)

delivery_time = 0

if max_order_time % 10 != 0:
    delivery_time = (max_order_time // 10 + 1) * 10
else:
    delivery_time = max_order_time

print(delivery_time)