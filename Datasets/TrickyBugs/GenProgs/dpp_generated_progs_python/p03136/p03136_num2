import sys

def can_draw_polygon(N, L):
    longest_side = max(L)
    sum_of_other_sides = sum(L) - longest_side
    
    if longest_side < sum_of_other_sides:
        return 'Yes'
    else:
        return 'No'

def main():
    # Read input from stdin
    N = int(sys.stdin.readline())
    L = list(map(int, sys.stdin.readline().split()))
    
    # Call the function to determine if polygon can be drawn
    result = can_draw_polygon(N, L)
    
    # Print the result to stdout
    print(result)

if __name__ == '__main__':
    main()