# Taking input
H, W = map(int, input().split())

# Calculate the minimum possible value of S_{max} - S_{min}
if H % 3 == 0 or W % 3 == 0:
    ans = 0
else:
    ans = min(H, W)
    for i in range(1, H):
        a = i * W
        b = (H - i) * (W // 2)
        c = (H - i) * (W - (W // 2))
        ans = min(ans, max(a, b, c) - min(a, b, c))
    for i in range(1, W):
        a = i * H
        b = (W - i) * (H // 2)
        c = (W - i) * (H - (H // 2))
        ans = min(ans, max(a, b, c) - min(a, b, c))

# Print the result
print(ans)