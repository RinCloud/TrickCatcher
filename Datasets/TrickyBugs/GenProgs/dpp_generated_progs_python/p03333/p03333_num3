import sys

def main():
    # Read input
    N = int(input())
    segments = []
    for _ in range(N):
        L, R = map(int, input().split())
        segments.append((L, R))

    # Sort segments by the right coordinate in descending order
    segments.sort(key=lambda x: x[1], reverse=True)

    # Calculate the total distance traveled by Takahashi
    total_distance = 0
    for i, (L, R) in enumerate(segments):
        # If it's the first segment, Takahashi walks to the leftmost point
        if i == 0:
            total_distance += abs(L)
        # If it's the last segment, Takahashi walks to the rightmost point
        elif i == N - 1:
            total_distance += abs(R)
        # For other segments, Takahashi walks to the nearest point
        else:
            total_distance += min(abs(L), abs(R))

    # Print the result
    print(total_distance)


if __name__ == "__main__":
    main()