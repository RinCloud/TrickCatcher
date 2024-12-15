def min_operations(N, c):
    num_operations = 0
    
    # Check if there is any white stone to the immediate left of a red stone
    for i in range(N - 1):
        if c[i] == 'W' and c[i + 1] == 'R':
            num_operations += 1
            c[i], c[i + 1] = c[i + 1], c[i]  # Swap two stones
            i += 1  # Skip the next stone since it has been checked and swapped
    
    # Check if there is any white stone at the end
    if c[N - 1] == 'W':
        num_operations += 1
    
    return num_operations

if __name__ == '__main__':
    N = int(input())
    c = list(input())
    
    print(min_operations(N, c))