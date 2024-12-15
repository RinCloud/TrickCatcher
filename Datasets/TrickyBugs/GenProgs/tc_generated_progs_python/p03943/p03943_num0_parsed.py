a, b, c = map(int, input().split())
print('Yes' if (a + b + c) % 2 == 0 and (max(a, b, c) - (a + b + c) // 2 == min(a, b, c)) else 'No')
