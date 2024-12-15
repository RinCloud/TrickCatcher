N = int(input())
products = [i * j for i in range(1, 10) for j in range(1, 10)]
if N in products:
    print("Yes")
else:
    print("No")
