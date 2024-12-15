def color_ratings(N, ratings):
    colors = [0] * 9
    max_color = 0
    
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
        elif rating < 3200:
            colors[7] = 1
        else:
            max_color += 1
    
    min_color = sum(colors)
    if min_color == 0:
        min_color = 1
    
    return min_color, min_color + max_color