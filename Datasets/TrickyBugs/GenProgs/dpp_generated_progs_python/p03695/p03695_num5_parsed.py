def find_colors(n, ratings):
    colors = [0] * 8
    for rating in ratings:
        if rating < 400:
            colors[0] = 1
        elif rating < 800:
            colors[1] = 1
        elif rating < 1200:
            colors[2] = 1
        elif rating < 1600:
            colors[3] = 1
        elif rating < 2000:
            colors[4] = 1
        elif rating < 2400:
            colors[5] = 1
        elif rating < 2800:
            colors[6] = 1
        else:
            colors[7] += 1
    
    min_colors = sum(colors[:7]) + (colors[7] > 0)
    max_colors = sum(colors)
    
    return min_colors, max_colors

n = int(input())
ratings = list(map(int, input().split()))

min_colors, max_colors = find_colors(n, ratings)
print(min_colors, max_colors)
