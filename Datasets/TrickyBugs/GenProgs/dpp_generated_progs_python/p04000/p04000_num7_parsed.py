import sys

def read_ints():
    return list(map(int, input().split()))

def count_subrectangles(h, w, n, cells):
    black_count = [[0] * w for _ in range(h)]
    for a, b in cells:
        black_count[a-1][b-1] = 1
    subrectangle_count = [0] * 10
    for i in range(h-2):
        for j in range(w-2):
            count = 0
            for di in range(3):
                for dj in range(3):
                    if black_count[i+di][j+dj] == 1:
                        count += 1
            subrectangle_count[count] += 1
    return subrectangle_count

h, w, n = read_ints()
cells = [read_ints() for _ in range(n)]
result = count_subrectangles(h, w, n, cells)
print(*result, sep='\n')