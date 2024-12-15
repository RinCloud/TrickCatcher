a, b, c, k = map(int, input().split())
if a >= k:
    print(k)
else:
    remaining = k - a
    if remaining <= b:
        print(a + remaining)  # Add remaining to a
    else:
        remaining -= b
        print(a - remaining)  # Subtract remaining from a
