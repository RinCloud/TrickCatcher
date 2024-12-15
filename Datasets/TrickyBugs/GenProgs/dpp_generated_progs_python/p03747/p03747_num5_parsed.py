# Solution
def update_position(N,L,T,ant_list):
    positions = []
    for i in range(N):
        position, direction = ant_list[i]
        if direction == 1:
            new_position = (position + T) % L
        else:
            new_position = (position - T) % L
        positions.append(new_position)
    return positions

if __name__ == '__main__':
    N, L, T = map(int, input().split())
    ant_list = []
    for _ in range(N):
        position, direction = map(int, input().split())
        ant_list.append((position, direction))
    
    positions = update_position(N, L, T, ant_list)
    for position in positions:
        print(position)