def extend_image(H, W, image):
    extended_image = []
    for i in range(H):
        extended_image.append(image[i])
        extended_image.append(image[i])
    return extended_image


H, W = map(int, input().split())
image = []
for _ in range(H):
    image.append(input())

extended_image = extend_image(H, W, image)
for row in extended_image:
    print(row)