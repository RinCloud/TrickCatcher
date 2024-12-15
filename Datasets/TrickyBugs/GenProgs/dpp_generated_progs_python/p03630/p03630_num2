def find_max_rectangle_area(h, w, s):
    max_area = 0
    cumulative_black_squares = [[0] * (w + 1) for _ in range(h + 1)]
    
    for i in range(1, h + 1):
        for j in range(1, w + 1):
            if s[i - 1][j - 1] == '#':
                cumulative_black_squares[i][j] = cumulative_black_squares[i - 1][j] + 1
            else:
                cumulative_black_squares[i][j] = cumulative_black_squares[i - 1][j]
    
    for i in range(1, h + 1):
        for j in range(1, w + 1):
            top_black_squares = cumulative_black_squares[i][j] - cumulative_black_squares[i][0]
            bottom_black_squares = cumulative_black_squares[h][j] - cumulative_black_squares[i][j]
            left_black_squares = j - top_black_squares
            right_black_squares = w - j - bottom_black_squares
            area = (top_black_squares + bottom_black_squares + 1) * (left_black_squares + right_black_squares + 1)
            max_area = max(max_area, area)
    
    return max_area

h, w = map(int, input().split())
s = [input() for _ in range(h)]

print(find_max_rectangle_area(h, w, s))