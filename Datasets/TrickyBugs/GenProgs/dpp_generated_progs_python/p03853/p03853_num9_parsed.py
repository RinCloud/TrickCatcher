# Read the height and width of the original image
H, W = map(int, input().split())

# Read the original image
image = [input() for _ in range(H)]

# Print the extended image
for row in image:
    print(row)
    print(row)
