A, B = map(int, input().split())

for p in range(1, 101):
    tax8 = int(p * 0.08)
    tax10 = int(p * 0.1)
    if tax8 == A and tax10 == B:
        print(p)
        break
else:
    print(-1)
