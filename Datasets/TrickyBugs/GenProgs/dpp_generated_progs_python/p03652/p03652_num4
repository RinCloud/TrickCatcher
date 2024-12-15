# Implementation of Takahashi's Sports Meet

def main():
    # Reading input
    N, M = map(int, input().split())
    sports_preference = [list(map(int, input().split())) for _ in range(N)]

    # Counting the participants per sport
    participants_count = [0] * M
    for i in range(N):
        participants_count[sports_preference[i][0] - 1] += 1
    
    # Finding the minimum number of participants in a sport
    min_participants = min(participants_count)

    # Printing the result
    print(min_participants)

if __name__ == "__main__":
    main()