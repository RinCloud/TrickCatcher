import sys

def reachable_islands(n, m, boat_services):
    islands = set()
    for i in range(m):
        islands.add(boat_services[i][0])
        islands.add(boat_services[i][1])

    for i in range(m):
        a = boat_services[i][0]
        b = boat_services[i][1]
        if 1 in (a, b) and n in (a, b):
            return "IMPOSSIBLE"
        elif 1 in (a, b) and n not in (a, b):
            return "POSSIBLE"
    
    return "IMPOSSIBLE"

def main():
    n, m = map(int, sys.stdin.readline().split())
    boat_services = []
    for _ in range(m):
        boat_services.append(list(map(int, sys.stdin.readline().split())))

    result = reachable_islands(n, m, boat_services)
    print(result)

if __name__ == "__main__":
    main()