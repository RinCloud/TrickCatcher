# Function to calculate the earliest possible time to reach the destination
def calculate_earliest_time(N, trains):
    earliest_time = [0] * N
    for i in range(N-1, -1, -1):
        if i == N-1:
            earliest_time[i] = 0
        else:
            wait_time = earliest_time[i+1]
            for j in range(i+1, N-1):
                if wait_time % trains[j][2] != 0:
                    wait_time += (trains[j][2] - wait_time % trains[j][2])
                wait_time += trains[j][0]
            if wait_time < trains[i][1]:
                earliest_time[i] = trains[i][1]
            else:
                earliest_time[i] = wait_time
    return earliest_time

# Main function
def main():
    # Read the input
    N = int(input())
    trains = []
    for _ in range(N-1):
        c, s, f = map(int, input().split())
        trains.append((c, s, f))
    
    # Calculate the earliest possible time to reach the destination for each station
    earliest_time = calculate_earliest_time(N, trains)
    
    # Print the result
    for time in earliest_time:
        print(time)

# Execute the main function
if __name__ == "__main__":
    main()