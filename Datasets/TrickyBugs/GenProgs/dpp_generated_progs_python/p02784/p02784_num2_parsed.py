def can_raccoon_win(health, moves):
    total_moves = sum(moves)
    
    if total_moves >= health:
        return 'Yes'
    else:
        return 'No'


if __name__ == '__main__':
    h, n = map(int, input().split())
    moves = list(map(int, input().split()))
    
    print(can_raccoon_win(h, moves))
