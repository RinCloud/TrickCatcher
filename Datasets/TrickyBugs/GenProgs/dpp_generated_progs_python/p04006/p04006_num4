import sys

def main():
    # Read input values
    N, x = map(int, input().split())
    a = list(map(int, input().split()))
    
    # Check if Snuke already has slimes of all colors
    if sum(a) == 0:
        print(0)
        return
    
    # Initialize minimum time required
    min_time = sys.maxsize
    
    # Iterate over all possible colors
    for color in range(N):
        time = 0
        slimes = a.copy()
        
        # Catch slimes of all colors until all colors are present
        while len(set(slimes)) < N:
            # Catch a slime of current color if Snuke does not already have it
            if not slimes[color]:
                slimes[color] = 1
                time += a[color]
            
            # Change the color of all slimes
            for i in range(N-1):
                slimes[i] = slimes[i+1]
            slimes[N-1] = slimes[0]
            time += x
        
        # Update minimum time required
        min_time = min(min_time, time)
    
    # Print the minimum time required
    print(min_time)

if __name__ == '__main__':
    main()