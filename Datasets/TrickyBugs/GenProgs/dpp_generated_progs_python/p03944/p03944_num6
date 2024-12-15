import sys

def main():
    # Read inputs
    W, H, N = map(int, sys.stdin.readline().split())
    points = []
    for _ in range(N):
        x, y, a = map(int, sys.stdin.readline().split())
        points.append((x, y, a))

    # Initialize white area
    white_area = W * H

    # Paint black regions
    for x, y, a in points:
        if a == 1:
            white_area = min(white_area, x)
        elif a == 2:
            white_area = min(white_area, W - x)
        elif a == 3:
            white_area = min(white_area, y)
        elif a == 4:
            white_area = min(white_area, H - y)

    # Print the area of the white region
    print(white_area)


if __name__ == "__main__":
    main()