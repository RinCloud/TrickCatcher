def main():
    N, T = map(int, input().split())
    routes = []
    for _ in range(N):
        c, t = map(int, input().split())
        routes.append((c, t))
    
    routes.sort(key=lambda x: x[0])
    
    min_cost = float('inf')
    for c, t in routes:
        if t <= T:
            min_cost = min(min_cost, c)
    
    if min_cost == float('inf'):
        print("TLE")
    else:
        print(min_cost)

if __name__ == "__main__":
    main()