# Taking input values
H, W = map(int, input().split())

# Creating empty list to store pixels
pixels = []

# Taking input of each pixel and storing in 'pixels' list
for _ in range(H):
    row = input()
    pixels.append(row)

# Extending the image vertically
extended_pixels = []
for pixel in pixels:
    extended_pixels.append(pixel)
    extended_pixels.append(pixel)

# Printing the extended image
for pixel in extended_pixels:
    print(pixel)