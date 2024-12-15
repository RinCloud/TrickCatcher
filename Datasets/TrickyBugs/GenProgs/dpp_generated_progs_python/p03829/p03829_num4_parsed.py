import sys

def main():
    # Read input
    n, a, b = map(int, input().split())
    towns = list(map(int, input().split()))

    # Initialize fatigue level to 0
    fatigue = 0

    # Iterate through the towns
    for i in range(1, n):
        # Calculate the distance between current town and previous town
        distance = towns[i] - towns[i-1]

        # Calculate the fatigue increase if we walk from previous town to current town
        walk_fatigue = a * distance

        # Calculate the fatigue increase if we teleport to current town
        teleport_fatigue = b

        # Update the total fatigue incurred so far
        fatigue += min(walk_fatigue, teleport_fatigue)

    # Print the minimum possible total increase of fatigue level
    print(fatigue)

if __name__ == '__main__':
    main()