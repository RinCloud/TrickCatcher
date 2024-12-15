def count_colors(ratings):
    color_counts = [0] * 8
    other_colors = 0
    
    for rating in ratings:
        if rating < 400:
            color_counts[0] = 1
        elif rating < 800:
            color_counts[1] = 1
        elif rating < 1200:
            color_counts[2] = 1
        elif rating < 1600:
            color_counts[3] = 1
        elif rating < 2000:
            color_counts[4] = 1
        elif rating < 2400:
            color_counts[5] = 1
        elif rating < 2800:
            color_counts[6] = 1
        elif rating < 3200:
            color_counts[7] = 1
        else:
            other_colors += 1
    
    min_colors = sum(color_counts) if sum(color_counts) > 0 else 1
    max_colors = sum(color_counts) + other_colors
    
    return min_colors, max_colors

n = int(input())
ratings = list(map(int, input().split()))
min_colors, max_colors = count_colors(ratings)
print(f"{min_colors} {max_colors}")