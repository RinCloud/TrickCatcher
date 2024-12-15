N = int(input())
boxes = []
for _ in range(N):
    xi, yi = map(int, input().split())
    boxes.append((xi, yi))

red_sorted = sorted(boxes, key=lambda x: -x[0])
blue_sorted = sorted(boxes, key=lambda x: -x[1])

R_max = red_sorted[0][0]
R_min = red_sorted[N-1][0]
B_max = blue_sorted[0][1]
B_min = blue_sorted[N-1][1]

result = (R_max - R_min) * (B_max - B_min)
print(result)