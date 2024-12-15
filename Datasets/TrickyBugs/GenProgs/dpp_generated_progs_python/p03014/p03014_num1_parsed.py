# Program

H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]

max_light = 0

# For each square, try placing the lamp and calculate the maximum light
for i in range(H):
    for j in range(W):
        if S[i][j] == "#":
            continue

        # Calculate the light in up direction
        light = 1
        up = i - 1
        while up >= 0 and S[up][j] != "#":
            light += 1
            up -= 1

        # Calculate the light in down direction
        down = i + 1
        while down < H and S[down][j] != "#":
            light += 1
            down += 1

        # Calculate the light in left direction
        left = j - 1
        while left >= 0 and S[i][left] != "#":
            light += 1
            left -= 1

        # Calculate the light in right direction
        right = j + 1
        while right < W and S[i][right] != "#":
            light += 1
            right += 1

        max_light = max(max_light, light)

print(max_light)