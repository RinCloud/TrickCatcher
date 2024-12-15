# Solution:

N = int(input())

flag = False

for i in range(1, 10):
    if N % i == 0 and N // i <= 9:
        flag = True
        break

if flag:
    print("Yes")
else:
    print("No")