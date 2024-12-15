A, B = map(int, input().split())

price = -1
for p in range(1, 10001): # Assuming the maximum price before tax is 10000 yen
    tax8 = p * 8 // 100
    tax10 = p * 10 // 100
    
    if tax8 == A and tax10 == B:
        price = p
        break

print(price)
