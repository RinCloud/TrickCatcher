A, B = map(int, input().split())

for price in range(1, 1000):
    tax_8 = int(price * 0.08)
    tax_10 = int(price * 0.10)
    if tax_8 == A and tax_10 == B:
        print(price)
        break
else:
    print(-1)