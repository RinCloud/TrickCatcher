import sys

def count_subrectangles(H, W, N, points):
    counts = [0] * 10
    for i in range(N):
        for j in range(-1, 2):
            for k in range(-1, 2):
                if (points[i][0] + j < 1 or points[i][0] + j > H or 
                    points[i][1] + k < 1 or points[i][1] + k > W):
                    continue
                count = 0
                for p in points:
                    if abs(p[0] - points[i][0] - j) <= 1 and abs(p[1] - points[i][1] - k) <= 1:
                        count += 1
                counts[count] += 1
    
    return counts

input_data = sys.stdin.read().splitlines()
H, W, N = map(int, input_data[0].split())
points = []
for i in range(N):
    points.append(list(map(int, input_data[i+1].split())))

result = count_subrectangles(H, W, N, points)
for count in result:
    print(count)