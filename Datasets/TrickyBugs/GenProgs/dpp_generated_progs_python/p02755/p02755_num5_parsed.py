# SOLUTION:

A, B = map(int, input().split())

for price in range(1, 10001):
    tax_8 = int(price * 0.08)
    tax_10 = int(price * 0.1)

    if tax_8 == A and tax_10 == B:
        print(price)
        break

else:
    print("-1")