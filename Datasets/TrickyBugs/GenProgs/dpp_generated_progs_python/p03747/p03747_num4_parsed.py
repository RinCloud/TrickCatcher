def ant_positions(N, L, T, ant_info):
    positions = []
    for ant in ant_info:
        X, W = ant
        if W == 1:
            position = (X + T) % L
        else:
            position = (X - T) % L
        positions.append(position)

    return positions


if __name__ == "__main__":
    N, L, T = map(int, input().split())
    ant_info = [list(map(int, input().split())) for _ in range(N)]

    result = ant_positions(N, L, T, ant_info)

    for position in result:
        print(position)