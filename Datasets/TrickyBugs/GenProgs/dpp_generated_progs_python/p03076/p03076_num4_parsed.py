A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

orders = [A, B, C, D, E]
orders.sort(reverse=True)

time = (orders[0] - 1) // 10 * 10 + orders[0]

print(time)