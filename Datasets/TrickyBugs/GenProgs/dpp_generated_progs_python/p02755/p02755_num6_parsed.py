# Program

A, B = map(int, input().split())

for price in range(1, 10001):
    tax_8_percent = int(price * 0.08)
    tax_10_percent = int(price * 0.1)
    if tax_8_percent == A and tax_10_percent == B:
        print(price)
        break
else:
    print(-1)