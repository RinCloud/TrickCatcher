# Taking input
H, W = map(int, input().split())

# Creating an empty list for the image
image = []

# Adding each row of the image to the list
for _ in range(H):
    image.append(input())

# Doubling the height of the image
extended_image = image + image

# Printing the extended image
for row in extended_image:
    print(row)