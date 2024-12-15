import sys

def main():
    # Read input from stdin
    n = int(input())
    trains = []
    for _ in range(n-1):
        c, s, f = map(int, input().split())
        trains.append((c, s, f))
    
    # Initialize the time to reach each station
    time = [0] * n
    
    # For each station (except the last one)
    for i in range(n-1):
        # Calculate the earliest time to reach Station N from the current station
        time_to_next = 0
        for j in range(i, n-1):
            c, s, f = trains[j]
            # Calculate the waiting time for the next train
            wait_time = max(0, (time_to_next - s) % f)
            # Update the time to reach the next station
            time_to_next = time_to_next + wait_time + c
        # Update the time for the current station
        time[i] = time_to_next
    
    # Print the result
    for t in time:
        print(t)
    
if __name__ == "__main__":
    main()