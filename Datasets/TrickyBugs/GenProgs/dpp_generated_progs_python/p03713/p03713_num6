# Minimizing Maximum and Minimum Areas

# Reading the input
H, W = map(int, input().split())

# For the minimum possible difference in areas, we divide the chocolate bar into three pieces with equal widths.
# We can divide the bar vertically or horizontally, depending on which axis has a larger length.

# If the width is larger than the height, we divide the bar horizontally.
if W > H:
    # We divide the bar into three equal parts horizontally, which means each part has a width of W // 3.
    # The maximum area will be W * H, and the minimum area will be W // 3 * H, since we divide the height evenly.
    # The minimum difference in areas will be W * H - W // 3 * H = (2 * W // 3) * H.
    print((2 * W // 3) * H)

# If the height is larger than or equal to the width, we divide the bar vertically.
else:
    # We divide the bar into three equal parts vertically, which means each part has a height of H // 3.
    # The maximum area will be W * H, and the minimum area will be W * H // 3, since we divide the width evenly.
    # The minimum difference in areas will be W * H - W * H // 3 = W * (2 * H // 3).
    print(W * (2 * H // 3))