H, W = map(int, input().split())

image = []
for _ in range(H):
    row = input()
    image.append(row)
    image.append(row)

for i in range(2 * H):
    print(image[i])
