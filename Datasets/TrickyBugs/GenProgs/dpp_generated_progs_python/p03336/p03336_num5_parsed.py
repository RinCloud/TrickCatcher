import sys

def bitwise_and(x, y):
    res = ""
    for i in range(len(x)):
        if x[i] == '1' and y[i] == '1':
            res += '1'
        else:
            res += '0'
    return res

def add_number(x, y, z):
    res = ""
    carry = 0
    for i in range(len(x)-1, -1, -1):
        sum_ = int(x[i]) + int(y[i]) + carry
        res = str(sum_ % 2) + res
        carry = sum_ // 2
    if carry:
        res = '1' + res
    return res

def play_bitwise_operation(n, m, k, x, y):
    for i in range(k):
        z = bitwise_and(x, y)
        x = add_number(x, z, "")
        y = add_number(y, z, "")
    return x, y

n, m, k = map(int, input().split())
x = input().strip()
y = input().strip()

res_x, res_y = play_bitwise_operation(n, m, k, x, y)

print(res_x)
print(res_y)
sys.stdout.flush()