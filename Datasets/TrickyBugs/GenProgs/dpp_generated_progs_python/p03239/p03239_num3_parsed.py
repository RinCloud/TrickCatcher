import sys

def find_smallest_cost(N, T, routes):
    min_cost = sys.maxsize
    for route in routes:
        c_i, t_i = route
        if t_i <= T:
            min_cost = min(min_cost, c_i)
            
    if min_cost == sys.maxsize:
        return 'TLE'
    else:
        return min_cost


if __name__ == '__main__':
    N, T = map(int, input().split())
    routes = []
    for _ in range(N):
        c_i, t_i = map(int, input().split())
        routes.append((c_i, t_i))
    
    result = find_smallest_cost(N, T, routes)
    print(result)