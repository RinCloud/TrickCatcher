A, B = map(int, input().split())

for price in range(1, 1000):
    tax1 = int(price * 0.08)
    tax2 = int(price * 0.10)
    
    if tax1 == A and tax2 == B:
        print(price)
        break
else:
    print(-1)