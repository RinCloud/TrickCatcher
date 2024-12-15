def main():
    N, V = map(int, input().split())
    oases = list(map(int, input().split()))

    # Check if it is possible to start from each oasis and visit all oases
    for i in range(N):
        if i == 0:
            # We can always start from the first oasis
            print("Possible")
        else:
            # Calculate the distance between the current oasis and the previous oasis
            distance = abs(oases[i] - oases[i-1])
            
            # Calculate the maximum amount of water needed to reach the current oasis
            max_water_needed = 2 * distance
            
            # Check if we have enough water in the hump to reach the current oasis
            if max_water_needed <= V:
                V -= max_water_needed
                print("Possible")
            else:
                print("Impossible")


if __name__ == "__main__":
    main()