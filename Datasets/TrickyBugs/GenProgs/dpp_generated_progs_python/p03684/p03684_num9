from itertools import combinations

def calculate_cost(towns):
    min_cost = float('inf')
    for town1, town2 in combinations(towns, 2):
        cost = min(abs(town1[0] - town2[0]), abs(town1[1] - town2[1]))
        if cost < min_cost:
            min_cost = cost
    return min_cost

def main():
    N = int(input())
    towns = []
    for _ in range(N):
        x, y = map(int, input().split())
        towns.append((x, y))
    print(calculate_cost(towns))

if __name__ == '__main__':
    main()