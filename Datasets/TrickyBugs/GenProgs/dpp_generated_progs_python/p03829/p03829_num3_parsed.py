import sys

def main():
    # Read input
    n, a, b = map(int, input().split())
    #  read X values as list
    X = list(map(int, input().split()))

    # Initialize fatigue level
    fatigue = 0

    # Iterate over towns
    for i in range(n-1):
        # Calculate distance between current town and next town
        distance = X[i+1] - X[i]
        # Calculate fatigue increase if walk
        walk_fatigue = distance * a
        
        # Calculate fatigue increase if teleport
        teleport_fatigue = b
        
        # Take minimum of walk and teleport fatigue
        fatigue += min(walk_fatigue, teleport_fatigue)
    
    # Print the minimum possible total increase of your fatigue level
    print(fatigue)


if __name__ == "__main__":
    main()