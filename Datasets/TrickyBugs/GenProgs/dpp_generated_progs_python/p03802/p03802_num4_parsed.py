import sys

def maximum_possible_distance(N, flags):
    x = []
    y = []
    
    for i in range(N):
        x_i, y_i = flags[i]
        x.append(x_i)
        y.append(y_i)
    
    max_distance = 0
    
    for i in range(N):
        for j in range(i+1, N):
            distance = max(abs(x[i]-x[j]), abs(y[i]-y[j]))
            max_distance = max(max_distance, distance)
    
    return max_distance


if __name__ == "__main__":
    N = int(input())
    flags = []
    for i in range(N):
        x_i, y_i = map(int, input().split())
        flags.append((x_i, y_i))
    
    print(maximum_possible_distance(N, flags))
    sys.stdout.flush()